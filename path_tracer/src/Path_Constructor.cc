#include <assert.h>
#include <vector>
#include "Path_Constructor.h"

#define LATENCY_ESTIMATE 0.000001
#define NO_SWITCH -1

Path_Constructor::Path_Constructor(Log_Reader* reader) {
  reader_ = reader;
}

void
Path_Constructor::construct_path(node_info& n_info) {
  //Create a vector to hold path info
  std::vector<path_info> path;
  
  //First get the source node id
  uint32_t src_id = n_info.from_addr;

  //Add node info to path vector
  path_info p_info;
  p_info.comp_id = src_id;
  p_info.comp_type = NODE;
  p_info.delay = 0;
  path.push_back(p_info);

  //Search the nic log corresponding to the source node id
  std::multimap<double, log_info>& nic_log = reader_->
    get_nic_logs(src_id).get_comp_log();

  log_info& src_nic_log = nic_log.lower_bound(n_info.send_time)->second;
  assert(src_nic_log.from_addr == n_info.from_addr &&
  	 src_nic_log.to_addr == n_info.to_addr &&
  	 src_nic_log.message_id == n_info.message_id);

  //Add nic info to path vector
  path_info p_info_nic;
  p_info_nic.comp_id = src_id;
  p_info_nic.comp_type = NIC;
  p_info_nic.delay = src_nic_log.tail_leaves-src_nic_log.arr_time;// or src_nic_log.head_leaves?
  path.push_back(p_info_nic);

  //From the nic get the source switch
  uint64_t config_map_key = static_cast<uint64_t>(src_id);
  config_map_key = config_map_key << 32;
  config_map_key = config_map_key | static_cast<uint64_t>(src_nic_log.out_port);
  int switch_id = reader_->get_switch_id_from_node(config_map_key); //node_to_switch_.at(config_map_key);

  //Loop over all the switches that occur in the path
  std::multimap<double, log_info>& switch_log = reader_->
    get_switch_logs(switch_id).get_comp_log();
  double prev_send_time = src_nic_log.tail_leaves; // or src_nic_log.head_leaves?
  uint64_t prev_config_map_key;
  while(switch_id != NO_SWITCH) {
    std::multimap<double, log_info>::iterator sw_lb =
      switch_log.lower_bound(prev_send_time + LATENCY_ESTIMATE);
    std::multimap<double, log_info>::iterator sw_ub =
      switch_log.upper_bound(prev_send_time + LATENCY_ESTIMATE);
    for(auto it = sw_lb; it != sw_ub; it++) {
      log_info& log_entry = it->second;
      if (log_entry.from_addr == n_info.from_addr &&
	  log_entry.to_addr == n_info.to_addr &&
	  log_entry.message_id == n_info.message_id) {
	//Found the log entry. add it to path vector
	path_info p_info_switch;
	p_info_switch.comp_id = switch_id;
	p_info_switch.comp_type = SWITCH;
	p_info_switch.delay = log_entry.tail_leaves-log_entry.arr_time;
	path.push_back(p_info_switch);

	prev_send_time = log_entry.tail_leaves;
	//Get the next switch, if present
	uint64_t config_map_key = static_cast<uint64_t>(switch_id);
	config_map_key = config_map_key << 32;
	config_map_key = config_map_key | static_cast<uint64_t>(log_entry.out_port);
	//if (switch_to_switch_.count(config_map_key) != 0) {
	if (reader_->switch_log_exists(config_map_key)) {
	  switch_id = reader_->get_switch_id_from_switch(config_map_key); //switch_to_switch_.at(config_map_key);
	} else {
	  prev_config_map_key = config_map_key;
	  switch_id = NO_SWITCH;
	}
	
	break;
      }
    }
  }

  //Find destination nic log entry
  uint32_t dest_id = reader_->get_node_id_from_switch(prev_config_map_key);//switch_to_node.at(prev_config_map_key);
  nic_log = reader_->get_nic_logs(dest_id).get_comp_log();

  std::multimap<double, log_info>::iterator nic_lb =
    nic_log.lower_bound(prev_send_time + LATENCY_ESTIMATE);
  std::multimap<double, log_info>::iterator nic_ub =
    nic_log.upper_bound(prev_send_time + LATENCY_ESTIMATE);
  for(auto it = nic_lb; it != nic_ub; it++) {
    log_info& log_entry = it->second;
    if (log_entry.from_addr == n_info.from_addr &&
	log_entry.to_addr == n_info.to_addr &&
	log_entry.message_id == n_info.message_id) {
      //Add nic info to path vector
      path_info p_info_nic;
      p_info_nic.comp_id = dest_id;
      p_info_nic.comp_type = NIC;
      p_info_nic.delay = log_entry.tail_leaves-log_entry.arr_time;// or src_nic_log.head_leaves?
      path.push_back(p_info_nic);

      prev_send_time = log_entry.tail_leaves;
      
      break;
    }
  }

  //Find destination node log entry
  std::multimap<double, node_info>& node_log = reader_->
    get_node_logs(dest_id).get_comp_log();
  node_info& node_log_entry = node_log.lower_bound(prev_send_time)->second;

  //Add node info to path vector
  path_info p_info_node;
  p_info_node.comp_id = dest_id;
  p_info_node.comp_type = NODE;
  p_info_node.delay = node_log_entry.recv_time-prev_send_time;// most likely 0
  path.push_back(p_info_node);

  //Output(append) the path to a node specific file
}

void
Path_Constructor::construct_node_paths(uint32_t* node_ctr) {
  while(*node_ctr != reader_->num_nodes_) {
    std::multimap<double, node_info>& node_log = reader_->
      get_node_logs(*node_ctr).get_comp_log();
    for(auto it = node_log.begin();it != node_log.end();it++) {
      node_info& n_info = it->second;
      if (n_info.send_time != 0) {
	construct_path(n_info);
      }
    }
    (*node_ctr)++;
  }
}

void
Path_Constructor::construct_all_paths() {
  uint32_t node_ctr = 0;
  construct_node_paths(&node_ctr);
}
