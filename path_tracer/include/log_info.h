#ifndef LOG_INFO_H_INCLUDED
#define LOG_INFO_H_INCLUDED

struct log_info {
  uint32_t from_addr;
  uint32_t to_addr;
  uint64_t message_id;
  uint64_t packet_id;
  uint32_t out_port;
  uint32_t next_hop_port;
  double arr_time;
  double head_leaves;
  double tail_leaves;
};

#endif
