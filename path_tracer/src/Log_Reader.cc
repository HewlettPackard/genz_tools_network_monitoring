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

#include<stdio.h>
#include <sys/stat.h>
#include <sstream> 

#include "Log_Reader.h"
#include "monitor_logger_ascii.h"

Log_Reader::Log_Reader() {
  read_topology_log();

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

bool
Log_Reader::file_exists(std::string filename) {
  struct stat buffer;
  return (stat (filename.c_str(), &buffer) == 0);
}

void
Log_Reader::read_topology_log() {
  FILE* file_ptr = fopen("topology_config.log","rb");
  topology_info* t_info = (topology_info*)malloc(sizeof(topology_info));
  fread(t_info,sizeof(topology_info),1,file_ptr);
  num_nodes_ = t_info->num_nodes;
  num_nics_ = t_info->num_nics;
  num_switches_ = t_info->num_switches;
  fclose(file_ptr);
}

void
Log_Reader::read_indv_config(const char* config_file_name, std::unordered_map<uint64_t,uint32_t>& config_map) {
  FILE* file_ptr = fopen(config_file_name,"rb");

  if (file_ptr == NULL) {
    std::cout << "Config file not available. Exiting\n";
    exit(0);
  }

  config_info* c_info = (config_info*)malloc(sizeof(config_info));
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
    if (file_exists(ss.str())) {
      FILE* file_ptr = fopen(ss.str().c_str(),"rb");

      node_info* n_info = (node_info*)malloc(sizeof(node_info));
      while(fread(n_info,sizeof(node_info),1,file_ptr) == 1) {
	if(n_info->send_time != 0)
	  all_nodes_[*node_ctr].insert(n_info->send_time,*n_info);
	else
	  all_nodes_[*node_ctr].insert(n_info->recv_time,*n_info);
      }

      fclose(file_ptr);
    }
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
    if (file_exists(ss.str())) {
      FILE* file_ptr = fopen(ss.str().c_str(),"rb");

      log_info* n_info = (log_info*)malloc(sizeof(log_info));
      while(fread(n_info,sizeof(log_info),1,file_ptr) == 1) {
	all_nics_[*nic_ctr].insert(n_info->arr_time,*n_info);
      }

      fclose(file_ptr);
    }
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
    if (file_exists(ss.str())) {
      FILE* file_ptr = fopen(ss.str().c_str(),"rb");

      log_info* s_info = (log_info*)malloc(sizeof(log_info));
      while(fread(s_info,sizeof(log_info),1,file_ptr) == 1) {
	all_switches_[*switch_ctr].insert(s_info->arr_time,*s_info);
      }

      fclose(file_ptr);
    }
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

void
Log_Reader::print_all_logs() {
  for(uint32_t i = 0; i < num_nodes_; i++) {
    std::stringstream ss;
    ss << "node_" << i << ".log";
    all_nodes_[i].print(ss.str());
  }

  for(uint32_t i = 0; i < num_nics_; i++) {
    std::stringstream ss;
    ss << "nic_" << i << ".log";
    all_nics_[i].print(ss.str());
  }

  for(uint32_t i = 0; i < num_switches_; i++) {
    std::stringstream ss;
    ss << "switch_" << i << ".log";
    all_switches_[i].print(ss.str());
  }  
}
