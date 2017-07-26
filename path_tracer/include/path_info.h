#ifndef PATH_INFO_H_INCLUDED
#define PATH_INFO_H_INCLUDED

enum component_type{
  NODE,
  NIC,
  SWITCH
};

struct path_info {
  int comp_id;
  component_type comp_type;
  double delay;
};

#endif
