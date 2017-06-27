#ifndef LOG_INFO_H_INCLUDED
#define LOG_INFO_H_INCLUDED

#include <sstmac/common/node_address.h>

namespace sstmac {
  namespace hw {

    struct log_info {
      node_id from_addr;
      node_id to_addr;
      uint64_t packet_id;
      uint32_t next_hop_id;
      uint32_t next_hop_type;
      double arr_time;
      double head_leaves;
      double tail_leaves;
    };
  
  }
}

#endif
