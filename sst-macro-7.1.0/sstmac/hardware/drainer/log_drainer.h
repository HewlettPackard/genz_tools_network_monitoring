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

#ifndef SSTMAC_HARDWARE_DRAINERS_LOG_DRAINER_H_INCLUDED
#define SSTMAC_HARDWARE_DRAINERS_LOG_DRAINER_H_INCLUDED

#include <sprockit/factories/factory.h>
#include <sprockit/debug.h>
#include <sstmac/common/event_scheduler.h>
#include <sstmac/hardware/common/connection.h>
#include <sprockit/sim_parameters_fwd.h>
#include <sstmac/hardware/common/monitor_logger.h>
#include <sstmac/hardware/common/log_info.h>

namespace sstmac {
namespace hw {

class log_drainer :
  public connectable_subcomponent
{
  DeclareFactory(log_drainer,uint64_t,event_manager*)
 public:
  log_drainer(sprockit::sim_parameters* params,event_scheduler* parent);
  ~log_drainer();
  void init(std::string);

  uint32_t
  addr() const {
    return my_addr_;
  }

  virtual void connect_output(
			      sprockit::sim_parameters* params,
			      int src_outport,
			      int dst_inport,
			      event_handler* mod) override;

  virtual void connect_input(
			     sprockit::sim_parameters* params,
			     int src_outport,
			     int dst_inport,
			     event_handler* mod) override;

  virtual void handle_payload(event* ev) = 0;

  virtual std::string to_string() const override;

  virtual link_handler* credit_handler(int port) const override;

  virtual link_handler* payload_handler(int port) const override;  

 protected:
  uint32_t my_addr_;
  timestamp credit_lat_;
  link_handler* payload_handler_;
  monitor_logger<log_info>* logger_;
  event_handler* src_handler_;
  int src_outport_;
};

}
}

#endif
