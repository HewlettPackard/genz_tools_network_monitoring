#ifndef MONITOR_LOGGER_H_INCLUDED
#define MONITOR_LOGGER_H_INCLUDED

#include <fstream>
#include <iostream>
#include <stdio.h>

namespace sstmac {
  namespace hw {

    template<class T>
      class monitor_logger
      {
      public:
	monitor_logger(std::string file) {
	  logger = fopen(file.c_str(), "wb");
	  //logger.open(file, std::ios::out | std::ios::binary);
	}

	~monitor_logger() {
	  fclose(logger);
	  //logger.close();
	}

	void recv(T* log) {
	  fwrite(log,sizeof(T), 1, logger);
	  //logger.write(reinterpret_cast<char*>(log), sizeof(T));
	}

      protected:
	FILE* logger;
	//std::ofstream logger;
      };

  }
}

#endif
