/*© Copyright [2017] Hewlett Packard Enterprise Development LP
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
  1. Redistributions of source code must retain the above copyright notice,
     this list of conditions and the following disclaimer.
  2. Redistributions in binary form must reproduce the above copyright notice,
     this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
  3. Neither the name of the copyright holder nor the names of its contributors
     may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.*/

#ifndef LOG_READER_H_INCLUDED
#define LOG_READER_H_INCLUDED

#include <unordered_map>
#include <string>

#include "Component_Logs.h"
#include "log_info.h"
#include "config_info.h"
#include "node_info.h"
#include "topology_info.h"

class Log_Reader {
 private:
  void read_topology_log();
  
  void read_configs();

  void read_node_logs();

  void read_nic_logs();

  void read_switch_logs();

  void read_indv_config(const char* config_file_name, std::unordered_map<uint64_t,uint32_t>& config_map);

  void read_indv_node_logs(uint32_t* node_ctr);

  void read_indv_nic_logs(uint32_t* nic_ctr);

  void read_indv_switch_logs(uint32_t* switch_ctr);

  bool file_exists(std::string filename);
  
 public:
  uint32_t num_nodes_, num_nics_, num_switches_;
  
  Log_Reader();

  ~Log_Reader();

  Component_Logs<node_info>& get_node_logs(uint32_t node_id) {
    return all_nodes_[node_id];
  }

  Component_Logs<log_info>& get_nic_logs(uint32_t node_id) {
    return all_nics_[node_id];
  }

  Component_Logs<log_info>& get_switch_logs(uint32_t sw_id) {
    return all_switches_[sw_id];
  }

  int get_switch_id_from_node(uint64_t key) {
    return node_to_switch_.at(key);
  }

  int get_switch_id_from_switch(uint64_t key) {
    return switch_to_switch_.at(key);
  }

  int get_node_id_from_switch(uint64_t key) {
    return switch_to_node_.at(key);
  }

  bool switch_log_exists(uint64_t key) {
    return switch_to_switch_.count(key);
  }
  
  void print_all_logs();

 protected:
  Component_Logs<node_info>* all_nodes_;
  Component_Logs<log_info>* all_nics_;
  Component_Logs<log_info>* all_switches_;

  std::unordered_map<uint64_t,uint32_t> node_to_switch_;
  std::unordered_map<uint64_t,uint32_t> switch_to_switch_;
  std::unordered_map<uint64_t,uint32_t> switch_to_node_;
};

#endif
