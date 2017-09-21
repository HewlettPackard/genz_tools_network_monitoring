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

#ifndef MONITOR_LOGGER_H_INCLUDED
#define MONITOR_LOGGER_H_INCLUDED

#include <sstmac/hardware/common/log_info.h>
#include <sstmac/hardware/common/config_info.h>
#include <sstmac/hardware/common/node_info.h>
#include <fstream>
#include <iostream>

namespace sstmac {
  namespace hw {

    template<class T>
    class monitor_logger
    {
    public:
      monitor_logger(std::string filename) {
	logger.open(filename);
      }
      
      ~monitor_logger() {
	logger.close();
      }
      
      void recv(T* log) {
	if (std::is_same<T, log_info>::value) {
	  logger << ((log_info*)log)->from_addr << ","
		 << ((log_info*)log)->to_addr << ","
		 << ((log_info*)log)->message_id << ","
		 << ((log_info*)log)->packet_id << ","
		 << ((log_info*)log)->out_port << ","
		 << ((log_info*)log)->next_hop_port << ","
		 << ((log_info*)log)->arr_time << ","
		 << (((log_info*)log)->head_leaves != 0 ? ((log_info*)log)->head_leaves : 0) << ","
		 << (((log_info*)log)->tail_leaves != 0 ? ((log_info*)log)->tail_leaves : 0)
		 << std::endl;
	} else if (std::is_same<T, config_info>::value) {
	  logger << ((config_info*)log)->from_id << ","
		 << ((config_info*)log)->from_port << ","
		 << ((config_info*)log)->to_id << ","
		 << ((config_info*)log)->to_port
		 << std::endl;
	} else if (std::is_same<T, node_info>::value) {
	  logger << ((node_info*)log)->from_addr << ","
		 << ((node_info*)log)->to_addr << ","
		 << ((node_info*)log)->message_id << ","
		 << ((node_info*)log)->send_time << ","
		 << ((node_info*)log)->recv_time
		 << std::endl;	  
	}
      }
      
    protected:
      std::ofstream logger;
    };

  }
}

#endif
