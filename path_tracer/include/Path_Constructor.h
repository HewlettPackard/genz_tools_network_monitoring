#ifndef PATH_CONSTRUCTOR_H_INCLUDED
#define PATH_CONSTRUCTOR_H_INCLUDED

#include "Log_Reader.h"
#include "path_info.h"
#include <vector>

class Path_Constructor {
 private:
  void construct_node_paths(uint32_t* node_ctr);
  void construct_path(node_info& n_info);
  
 public:
  Path_Constructor(Log_Reader* reader);
  void construct_all_paths();
  void output_path(int node_id, std::vector<path_info>& path);
 protected:
  Log_Reader* reader_;
  /*2-dim vector to hold all paths*/
  //std::vector<vector<path_info> > all_paths;
};

#endif
