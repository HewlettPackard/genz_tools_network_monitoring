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

#include <sstmac/hardware/drainer/log_drainer.h>
#include <sprockit/util.h>
#include <sprockit/sim_parameters.h>
#include <sprockit/keyword_registration.h>

RegisterDebugSlot(log_drainer)

RegisterKeywords("drainer_name");
RegisterNamespaces("drainer");

namespace sstmac {
  namespace hw {

    log_drainer::~log_drainer()
    {
      delete logger_;
    }

    log_drainer::log_drainer(sprockit::sim_parameters* params, event_scheduler* parent)
      : connectable_subcomponent(parent)
    {
      if (!params->has_param("credit_latency")){
	params->add_param_override("credit_latency", "0ns");
      }
      credit_lat_ = params->get_time_param("credit_latency");
    }

    void
    log_drainer::init(std::string log_name)
    {
      logger_ = new monitor_logger<log_info>(log_name);
    }
    
    void
    log_drainer::connect_output(
				sprockit::sim_parameters* port_params,
				int src_outport,
				int dst_inport,
				event_handler* mod)
    {
      
    }
    
    void
    log_drainer::connect_input(
			       sprockit::sim_parameters* port_params,
			       int src_outport,
			       int dst_inport,
			       event_handler* mod)
    {
      src_outport_ = src_outport;
      src_handler_ = mod;
    }
    
    std::string
    log_drainer::to_string() const
    {
      //return sprockit::printf("Log drainer %d", int(my_addr_));
      return sprockit::printf("Log drainer");
    }

    link_handler*
    log_drainer::credit_handler(int port) const
    {
      return NULL; //SHOULD NEVER BE EXECUTED
    }

    link_handler*
    log_drainer::payload_handler(int port) const
    {
      return payload_handler_;
    }
    
  
  }
}
