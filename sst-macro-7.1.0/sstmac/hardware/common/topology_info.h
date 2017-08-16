#ifndef TOPOLOGY_INFO_H_INCLUDED
#define TOPOLOGY_INFO_H_INCLUDED

namespace sstmac {
  namespace hw {

    struct topology_info {
      int num_nodes;
      int num_nics;
      int num_switches;
    };
  
  }
}

#endif
