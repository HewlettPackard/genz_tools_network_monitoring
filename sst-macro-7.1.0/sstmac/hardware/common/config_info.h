#ifndef CONFIG_INFO_H_INCLUDED
#define CONFIG_INFO_H_INCLUDED

namespace sstmac {
  namespace hw {

    struct config_info {
      int from_id;
      int from_port;
      int to_id;
      int to_port;
    };
  
  }
}

#endif
