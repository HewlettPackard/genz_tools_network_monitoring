#ifndef LOG_READER_H_INCLUDED
#define LOG_READER_H_INCLUDED

#include <unordered_map>

#include "Component_Logs.h"
#include "log_info.h"
#include "config_info.h"
#include "node_info.h"

class Log_Reader {
 private:
  void read_configs();

  void read_node_logs();

  void read_nic_logs();

  void read_switch_logs();

  void read_indv_config(const char* config_file_name, std::unordered_map<uint64_t,uint32_t>& config_map);

  void read_indv_node_logs(uint32_t* node_ctr);

  void read_indv_nic_logs(uint32_t* nic_ctr);

  void read_indv_switch_logs(uint32_t* switch_ctr);
  
 public:
  Log_Reader(uint32_t num_nodes, uint32_t num_nics, uint32_t num_switches);

  ~Log_Reader();

 protected:
  uint32_t num_nodes_, num_nics_, num_switches_;
  Component_Logs<node_info>* all_nodes_;
  Component_Logs<log_info>* all_nics_;
  Component_Logs<log_info>* all_switches_;

  std::unordered_map<uint64_t,uint32_t> node_to_switch_;
  std::unordered_map<uint64_t,uint32_t> switch_to_switch_;
  std::unordered_map<uint64_t,uint32_t> switch_to_node_;
};

#endif
