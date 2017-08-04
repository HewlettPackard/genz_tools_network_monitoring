#ifndef MONITOR_LOGGER_H_INCLUDED
#define MONITOR_LOGGER_H_INCLUDED

#include <fstream>
#include <iostream>

#include "log_info.h"
#include "config_info.h"
#include "node_info.h"

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

#endif
