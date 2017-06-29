#ifndef MONITOR_LOGGER_H_INCLUDED
#define MONITOR_LOGGER_H_INCLUDED

#include <sstmac/hardware/common/log_info.h>
#include <fstream>
#include <iostream>

namespace sstmac {
  namespace hw {

    class monitor_logger
    {
    public:
      monitor_logger(std::string);
      ~monitor_logger();
      std::ofstream& get_logger();
      void recv(log_info*);
    protected:
      std::ofstream logger;
    };

  }
}

#endif
