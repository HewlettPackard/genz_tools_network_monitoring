#ifndef LOG_INFO_H_INCLUDED
#define LOG_INFO_H_INCLUDED

#include <sstmac/common/node_address.h>

namespace sstmac {
  namespace hw {

    struct config_info {
      int from_id;
      int from_port;
      int to_it;
      int to_port;
    };
  
  }
}

#endif
