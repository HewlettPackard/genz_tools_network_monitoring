#include <sstmac/hardware/common/monitor_logger.h>

namespace sstmac {
  namespace hw {

    monitor_logger::monitor_logger(std::string filename) {
      logger.open(filename);
    }

    monitor_logger::~monitor_logger() {
      logger.close();
    }

    std::ofstream& monitor_logger::get_logger() {
      return logger;
    }
    
    void monitor_logger::recv(log_info* log) {
      logger << log->from_addr << ","
	     << log->to_addr << ","
	     << log->packet_id << ","
	     << log->next_hop_id << ","
	     << log->next_hop_type << ","
	     << log->arr_time << ","
	     << log->head_leaves << ","
	     << log->tail_leaves
	     << std::endl;
    }
  }
}
