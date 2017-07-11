#ifndef NODE_INFO_H_INCLUDED
#define NODE_INFO_H_INCLUDED

namespace sstmac {
  namespace hw {

    struct node_info {
      uint32_t from_addr; //Get it from node_id
      uint32_t to_addr; //Get it from node_id
      uint64_t message_id;
      double send_time;
    };
  
  }
}

#endif
