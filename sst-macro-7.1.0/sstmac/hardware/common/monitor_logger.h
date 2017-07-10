#ifndef MONITOR_LOGGER_H_INCLUDED
#define MONITOR_LOGGER_H_INCLUDED

#include <sstmac/hardware/common/log_info.h>
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
	//filename = new std::string(file);
	//logger.open(file, std::ios::out | std::ios::binary);
	//logger.open(filename);

	//char buffer[100];
	//std::ofstream myFile ("adrsh_data.bin", std::ios::out | std::ios::binary);
	//logger.write (buffer, 100);
	//myFile.close();

	logger = fopen(file.c_str(), "wb");
      }
      
      ~monitor_logger() {
	//delete filename;
	//logger.close();
	fclose(logger);
      }
      
      /* std::ofstream& get_logger() { */
      /* 	return logger; */
      /* } */
      
      void recv(T* log) {
	fwrite(log,sizeof(struct log_info), 1, logger);
	//logger << log;

	/* std::ofstream myFile; */
	/* myFile.open(*filename, std::ios::out | std::ios::binary); */
	/* myFile.write(reinterpret_cast<char*>(log), sizeof(struct log_info)); */
	/* myFile.close(); */

	//logger.write(reinterpret_cast<char*>(log), sizeof(struct log_info));
	/* logger << log->from_addr << "," */
	/* 	     << log->to_addr << "," */
	/* 	     << log->packet_id << "," */
	/* 	     << log->out_port << "," */
	/* 	     << log->next_hop_port << "," */
	/* 	     << log->arr_time << "," */
	/* 	     << (log->head_leaves != 0 ? std::to_string(log->head_leaves) : " ") << "," */
	/* 	     << (log->tail_leaves != 0 ? std::to_string(log->tail_leaves) : " ") */
	/* 	     << std::endl;	 */
      }
      
    protected:
      //std::ofstream logger;
      //std::string* filename;
      FILE* logger;
    };

  }
}

#endif
