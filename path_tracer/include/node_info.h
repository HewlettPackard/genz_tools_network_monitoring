#ifndef NODE_INFO_H_INCLUDED
#define NODE_INFO_H_INCLUDED

struct node_info {
  uint32_t from_addr;
  uint32_t to_addr;
  uint64_t message_id;
  double send_time;
  double recv_time;
};

#endif
