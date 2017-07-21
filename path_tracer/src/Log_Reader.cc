#include<stdio.h>
#include <sstream> 

#include "Log_Reader.h"

Log_Reader::Log_Reader(uint32_t num_nodes, uint32_t num_nics, uint32_t num_switches) {
  num_nodes_ = num_nodes;
  num_nics_ = num_nics;
  num_switches_ = num_switches;
  all_nodes_ = new Component_Logs<node_info>[num_nodes_];
  all_nics_ = new Component_Logs<log_info>[num_nics_];
  all_switches_ = new Component_Logs<log_info>[num_switches_];

  read_configs();
  read_node_logs();
  read_nic_logs();
  read_switch_logs();
}

Log_Reader::~Log_Reader() {
  delete [] all_nodes_;
  delete [] all_nics_;
  delete [] all_switches_;
}

void
Log_Reader::read_indv_config(const char* config_file_name, std::unordered_map<uint64_t,uint32_t>& config_map) {
  FILE* file_ptr = fopen(config_file_name,"rb");

  config_info* c_info = nullptr;
  while(fread(c_info,sizeof(config_info),1,file_ptr) == 1) {
    uint64_t config_map_key = static_cast<uint64_t>(c_info->from_id);
    config_map_key = config_map_key << 32;
    config_map_key = config_map_key | static_cast<uint64_t>(c_info->from_port);
    //maybe add assertion here
    config_map.insert(std::pair<uint64_t,uint32_t>(config_map_key,c_info->to_id));
  }
  
  fclose(file_ptr);
}

void
Log_Reader::read_configs() {
  //First read the node to switch connection configuration
  read_indv_config("inj_ep_config.log",node_to_switch_);

  //Next read switch to node configuration
  read_indv_config("ej_ep_config.log",switch_to_node_);

  //Finally read switch to switch configuration
  read_indv_config("switch_config.log",switch_to_switch_);
}

void
Log_Reader::read_indv_node_logs(uint32_t* node_ctr) {
  while(*node_ctr != num_nodes_) {
    std::stringstream ss;
    ss << "node_" << *node_ctr << ".log";
    FILE* file_ptr = fopen(ss.str().c_str(),"rb");

    node_info* n_info = nullptr;
    while(fread(n_info,sizeof(node_info),1,file_ptr) == 1) {
      all_nodes_[*node_ctr].insert(n_info->send_time,*n_info);
    }

    fclose(file_ptr);
    (*node_ctr)++;
  }
}

void
Log_Reader::read_node_logs() {
  //Crete N threads

  //call function to perform workstealing of node log files using N threads
  uint32_t node_ctr = 0;
  read_indv_node_logs(&node_ctr);

  //join threads
}

void
Log_Reader::read_indv_nic_logs(uint32_t* nic_ctr) {
  while(*nic_ctr != num_nics_) {
    std::stringstream ss;
    ss << "nic_" << *nic_ctr << ".log";
    FILE* file_ptr = fopen(ss.str().c_str(),"rb");

    log_info* n_info = nullptr;
    while(fread(n_info,sizeof(log_info),1,file_ptr) == 1) {
      all_nics_[*nic_ctr].insert(n_info->arr_time,*n_info);
    }

    fclose(file_ptr);
    (*nic_ctr)++;
  }
}

void
Log_Reader::read_nic_logs() {
  //Crete N threads

  //call function to perform workstealing of node log files using N threads
  uint32_t nic_ctr = 0;
  read_indv_nic_logs(&nic_ctr);

  //join threads
}

void
Log_Reader::read_indv_switch_logs(uint32_t* switch_ctr) {
  while(*switch_ctr != num_switches_) {
    std::stringstream ss;
    ss << "switch_" << *switch_ctr << ".log";
    FILE* file_ptr = fopen(ss.str().c_str(),"rb");

    log_info* s_info = nullptr;
    while(fread(s_info,sizeof(log_info),1,file_ptr) == 1) {
      all_switches_[*switch_ctr].insert(s_info->arr_time,*s_info);
    }

    fclose(file_ptr);
    (*switch_ctr)++;
  }
}

void
Log_Reader::read_switch_logs() {
  //Crete N threads

  //call function to perform workstealing of node log files using N threads
  uint32_t switch_ctr = 0;
  read_indv_switch_logs(&switch_ctr);

  //join threads
}
