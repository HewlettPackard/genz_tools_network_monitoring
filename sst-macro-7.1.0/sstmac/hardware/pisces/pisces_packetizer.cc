/**
Copyright 2009-2017 National Technology and Engineering Solutions of Sandia, 
LLC (NTESS).  Under the terms of Contract DE-NA-0003525, the U.S.  Government 
retains certain rights in this software.

Sandia National Laboratories is a multimission laboratory managed and operated
by National Technology and Engineering Solutions of Sandia, LLC., a wholly 
owned subsidiary of Honeywell International, Inc., for the U.S. Department of 
Energy's National Nuclear Security Administration under contract DE-NA0003525.

Copyright (c) 2009-2017, NTESS

All rights reserved.

Redistribution and use in source and binary forms, with or without modification, 
are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.

    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.

    * Neither the name of Sandia Corporation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Questions? Contact sst-macro-help@sandia.gov
*/

#include <sstmac/hardware/pisces/pisces_packetizer.h>
#include <sstmac/hardware/topology/structured_topology.h>
#include <sstmac/hardware/network/network_message.h>
#include <sstmac/hardware/pisces/pisces_packetizer.h>
#include <sstmac/hardware/node/node.h>
#include <sstmac/software/process/operating_system.h>
#include <sstmac/common/event_manager.h>
#include <sstmac/common/event_callback.h>
#include <sstmac/common/stats/stat_spyplot.h>
#include <sstmac/hardware/pisces/packet_allocator.h>
#include <sprockit/errors.h>
#include <sprockit/util.h>
#include <sprockit/sim_parameters.h>
#include <sprockit/keyword_registration.h>
#include <stddef.h>

#define IJ_PORT 0

RegisterNamespaces("congestion_delays", "congestion_matrix");

namespace sstmac {
namespace hw {

pisces_packetizer::pisces_packetizer(sprockit::sim_parameters* params,
                                     event_scheduler* parent) :
 inj_buffer_(nullptr),
 ej_buffer_(nullptr),
 inj_stats_(nullptr),
 ej_stats_(nullptr),
 pkt_allocator_(nullptr),
 payload_handler_(nullptr),
 packetizer(params, parent)
{
  init(params, parent);
}

void
pisces_packetizer::init(sprockit::sim_parameters* params, event_scheduler* parent)
{
  pisces_sender::configure_payload_port_latency(params);
  inj_buffer_ = new pisces_injection_buffer(params, parent);
  inj_stats_ = packet_stats_callback::factory::
                get_optional_param("stats", "null", params, parent);
  inj_buffer_->set_stat_collector(inj_stats_);

  sprockit::sim_parameters* ej_params = params->get_optional_namespace("ejection");
  //do not put any latency on eject buffer
  ej_params->add_param_override("send_latency", "0ns");
  ej_params->add_param_override("credit_latency", "0ns");
  ej_params->add_param_override("credits", 1<<30);
  ej_buffer_ = new pisces_eject_buffer(ej_params, parent);
  ej_stats_ = packet_stats_callback::factory::
                        get_optional_param("stats", "null", ej_params, parent);

  pkt_allocator_ = packet_allocator::factory
      ::get_optional_param("packet_allocator", "pisces", params);

  payload_handler_ = new_handler(this, &pisces_packetizer::recv_packet);

  log_buffer_ = new pisces_log_buffer(params, parent);
}

pisces_packetizer::~pisces_packetizer()
{
  if (inj_buffer_) delete inj_buffer_;
  if (ej_buffer_) delete ej_buffer_;
  if (inj_stats_) delete inj_stats_;
  if (ej_stats_) delete ej_stats_;
  if (pkt_allocator_) delete pkt_allocator_;
  if (payload_handler_) delete payload_handler_;
}

void
pisces_packetizer::init(unsigned int phase)
{
}

void
pisces_packetizer::setup()
{
}

link_handler*
pisces_packetizer::new_credit_handler() const
{
#if SSTMAC_INTEGRATED_SST_CORE
  return new SST::Event::Handler<pisces_packetizer>(
           const_cast<pisces_packetizer*>(this),
           &pisces_packetizer::recv_credit);
#else
  return new_handler(const_cast<pisces_packetizer*>(this),
                         &pisces_packetizer::recv_credit);
#endif
}

link_handler*
pisces_packetizer::new_log_credit_handler() const
{
  return new_handler(const_cast<pisces_packetizer*>(this),
		     &pisces_packetizer::recv_log_credit);
}
  
link_handler*
pisces_packetizer::new_payload_handler() const
{
#if SSTMAC_INTEGRATED_SST_CORE
  return new SST::Event::Handler<pisces_packetizer>(
        const_cast<pisces_packetizer*>(this),
        &pisces_packetizer::recv_packet);
#else
  return new_handler(const_cast<pisces_packetizer*>(this),
                           &pisces_packetizer::recv_packet);
#endif
}

void
pisces_packetizer::recv_credit(event* ev)
{
  inj_buffer_->handle_credit(ev);
  int vn = 0;
  sendWhatYouCan(vn);
}

void
pisces_packetizer::recv_log_credit(event* ev)
{
  log_buffer_->handle_credit(ev);
}
  
void
pisces_packetizer::deadlock_check()
{
  inj_buffer_->deadlock_check();
  packetizer::deadlock_check();
}

bool
pisces_packetizer::spaceToSend(int vn, int num_bits)
{
  //convert back to bytes
  return inj_buffer_->space_to_send(num_bits/8);
}

  //SET PM BIT HERE**************
log_info*
pisces_packetizer::inject(int vn, long bytes, long byte_offset, message* msg, bool pm_monitor)
{
  bool is_tail = (byte_offset + bytes) == msg->byte_length();
  //only carry the payload if you're the tail packet
  pisces_payload* payload = pkt_allocator_->new_packet(bytes, msg->flow_id(), is_tail,
                                                       msg->toaddr(), msg->fromaddr(),
                                                       is_tail ? msg : nullptr);
  payload->set_id(packet_ctr_++);
  payload->set_pm_monitor(pm_monitor);
  routable* rtbl = payload->interface<routable>();
  routable::path& path = rtbl->current_path();
  path.outport = IJ_PORT;

  return inj_buffer_->handle_payload(payload);
}

  void
  pisces_packetizer::sendWhatYouCan(int vn){
    std::list<pending_send>& pending = pending_[vn];
    while (!pending.empty()){
      pending_send& next = pending.front();
      long initial_offset = next.offset;
      while (next.bytes_left){
	long num_bytes = std::min(next.bytes_left, long(packet_size_));
	if (!spaceToSend(vn, num_bytes*8)){
	  debug_printf(sprockit::dbg::pisces,"no space to send %d bytes on vn %d", num_bytes, vn);
	  return;
	}
	debug_printf(sprockit::dbg::pisces,"injecting %d bytes on vn %d", num_bytes, vn);
	log_info* log = inject(vn, num_bytes, next.offset, next.msg,
			       pm_mark_packet(next, num_bytes, next.offset));

	if (log) {
	  pisces_log_packet* log_pkt = new pisces_log_packet(log);
	  log_buffer_->handle_payload(log_pkt);
	  // if (logger_ != NULL) {
	  //   logger_->recv(log);
	  // }
	  // delete log;
	}

	next.offset += num_bytes;
	next.bytes_left -= num_bytes;
      }
      long bytes_sent = next.offset - initial_offset;
      if (next.msg->needs_ack()){
	timestamp time_to_send(bytes_sent * inv_bw_);
	message* ack = next.msg->clone_ack();
	schedule_delay(time_to_send, acker_, ack);
      }
      //the entire packet sent
      pending.pop_front();
    }
  }
  

void
pisces_packetizer::recv_packet_common(pisces_payload* pkt)
{
  ej_buffer_->return_credit(pkt);
  ej_stats_->collect_final_event(pkt);
}

void
pisces_packetizer::set_output(sprockit::sim_parameters* params,
                              int inj_port, event_handler* handler)
{
  inj_buffer_->set_output(params, IJ_PORT, inj_port, handler);
}

void
pisces_packetizer::set_input(sprockit::sim_parameters* params,
                             int ej_port, event_handler* handler)
{
  int only_port = 0;
  ej_buffer_->set_output(params, only_port, only_port, payload_handler_);
  ej_buffer_->set_input(params, only_port, ej_port, handler);
}

void
pisces_packetizer::set_log_output(int inj_port, event_handler* handler)
{
  log_buffer_->set_output(NULL,IJ_PORT, inj_port, handler);
}

void
pisces_simple_packetizer::recv_packet(event* ev)
{
  pisces_payload* pkt = static_cast<pisces_payload*>(ev);
  recv_packet_common(pkt);

  if (pkt->is_pm_monitor()) {
    log_info* log = new log_info();
    log->from_addr = pkt->fromaddr();
    log->to_addr = pkt->toaddr();
    log->message_id = pkt->flow_id();
    log->packet_id = pkt->get_id();
    log->out_port = 0;
    log->next_hop_port = 0;
    log->arr_time = pkt->arrival().sec();
    log->head_leaves =  0;
    log->tail_leaves = 0;
    
    pisces_log_packet* log_pkt = new pisces_log_packet(log);
    log_buffer_->handle_payload(log_pkt);    
    
    // if (logger_ != NULL) {
    //   log_info log;
    //   log.from_addr = pkt->fromaddr();
    //   log.to_addr = pkt->toaddr();
    //   log.message_id = pkt->flow_id();
    //   log.packet_id = pkt->get_id();
    //   log.out_port = 0;
    //   log.next_hop_port = 0;
    //   log.arr_time = pkt->arrival().sec();
    //   log.head_leaves =  0;
    //   log.tail_leaves = 0;
    //   logger_->recv(&log);
    // }
  }
  
  int vn = 0;
  packetArrived(vn, pkt);
}

void
pisces_cut_through_packetizer::recv_packet(event* ev)
{
  pisces_payload* pkt = static_cast<pisces_payload*>(ev);
  int vn = 0;
  recv_packet_common(pkt);
  timestamp delay(pkt->num_bytes() / pkt->bw());
  debug_printf(sprockit::dbg::pisces,
    "packet %s scheduled to arrive at packetizer after delay of t=%12.6es",
     pkt->to_string().c_str(), delay.sec());
  
  if (pkt->is_pm_monitor()) {
    log_info* log = new log_info();
    log->from_addr = pkt->fromaddr();
    log->to_addr = pkt->toaddr();
    log->message_id = pkt->flow_id();
    log->packet_id = pkt->get_id();
    log->out_port = 0;
    log->next_hop_port = 0;
    log->arr_time = pkt->arrival().sec();
    log->head_leaves =  0;
    log->tail_leaves = 0;
    
    pisces_log_packet* log_pkt = new pisces_log_packet(log);
    log_buffer_->handle_payload(log_pkt);    
    // if (logger_ != NULL) {
    //   log_info log;
    //   log.from_addr = pkt->fromaddr();
    //   log.to_addr = pkt->toaddr();
    //   log.message_id = pkt->flow_id();
    //   log.packet_id = pkt->get_id();
    //   log.out_port = 0;
    //   log.next_hop_port = 0;
    //   log.arr_time = pkt->arrival().sec();
    //   log.head_leaves =  0;
    //   log.tail_leaves = 0;
    //   logger_->recv(&log);
    // }
  }
  
  send_delayed_self_event_queue(delay,
    new_callback(this, &packetizer::packetArrived, vn, (packet*)pkt));
}

}
} // end of namespace sstmac.
