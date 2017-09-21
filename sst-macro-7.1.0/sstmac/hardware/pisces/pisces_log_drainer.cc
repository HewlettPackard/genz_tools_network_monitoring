/*© Copyright [2017] Hewlett Packard Enterprise Development LP
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
  1. Redistributions of source code must retain the above copyright notice,
     this list of conditions and the following disclaimer.
  2. Redistributions in binary form must reproduce the above copyright notice,
     this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
  3. Neither the name of the copyright holder nor the names of its contributors
     may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.*/

#include <sstmac/hardware/pisces/pisces_log_drainer.h>
#include <sstmac/hardware/pisces/pisces.h>

namespace sstmac {
  namespace hw {

    pisces_log_drainer::~pisces_log_drainer()
    {
    }

    pisces_log_drainer::pisces_log_drainer(sprockit::sim_parameters* params, event_scheduler* parent)
      : log_drainer(params, parent)
    {
      payload_handler_ = new_handler(const_cast<pisces_log_drainer*>(this),
				     &pisces_log_drainer::handle_payload);
    }
    
    void
    pisces_log_drainer::handle_payload(event *ev)
    {
      //First extract log from packet.
      auto pkt = static_cast<pisces_log_packet*>(ev);
      logger_->recv(pkt->get_log());

      //Next send back credit
      pisces_credit* credit = new pisces_credit(src_outport_,
						0, 1);
      timestamp credit_departure = now();
      
      send_to_link(credit_departure,
		   credit_lat_,
		   src_handler_,
		   credit);
    }
  }
}
