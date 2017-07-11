#ifndef MONITOR_LOGGER_H_INCLUDED
#define MONITOR_LOGGER_H_INCLUDED

#include <sstmac/hardware/common/log_info.h>
#include <sstmac/hardware/common/config_info.h>
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
		 << ((log_info*)log)->packet_id << ","
		 << ((log_info*)log)->out_port << ","
		 << ((log_info*)log)->next_hop_port << ","
		 << ((log_info*)log)->arr_time << ","
		 << (((log_info*)log)->head_leaves != 0 ? std::to_string(((log_info*)log)->head_leaves) : " ") << ","
		 << (((log_info*)log)->tail_leaves != 0 ? std::to_string(((log_info*)log)->tail_leaves) : " ")
		 << std::endl;
	} else if (std::is_same<T, config_info>::value) {
	  logger << ((config_info*)log)->from_id << ","
		 << ((config_info*)log)->from_port << ","
		 << ((config_info*)log)->to_id << ","
		 << ((config_info*)log)->to_port << ","
		 << std::endl;
	}
      }
      
    protected:
      std::ofstream logger;
    };

  }
}

#endif
