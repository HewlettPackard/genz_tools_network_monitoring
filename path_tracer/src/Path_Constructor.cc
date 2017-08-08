#include <assert.h>
#include <sys/stat.h>
#include <fstream>
#include <sstream>

#include "Path_Constructor.h"

#define LATENCY_ESTIMATE 0//0.00001
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

  p_info.arr_time = 0;
  p_info.dep_time = n_info.send_time;
  p_info.link_delay = 0;
  p_info.comp_delay = 0;
  path.push_back(p_info);

  //Search the nic log corresponding to the source node id
  std::multimap<double, log_info>& nic_log = reader_->
    get_nic_logs(src_id).get_comp_log();

  log_info& src_nic_log = nic_log.lower_bound(n_info.send_time)->second;

  assert(src_nic_log.from_addr == n_info.from_addr ||
	 src_nic_log.to_addr == n_info.to_addr ||
	 src_nic_log.message_id == n_info.message_id);

  //Add nic info to path vector
  path_info p_info_nic;
  p_info_nic.comp_id = src_id;
  p_info_nic.comp_type = NIC;
  p_info_nic.comp_delay = src_nic_log.head_leaves-src_nic_log.arr_time;// or src_nic_log.tail_leaves?
  p_info_nic.link_delay =  src_nic_log.arr_time - n_info.send_time;
  p_info_nic.arr_time = src_nic_log.arr_time;
  p_info_nic.dep_time = src_nic_log.head_leaves;
  
  path.push_back(p_info_nic);

  //From the nic get the source switch
  uint64_t config_map_key = static_cast<uint64_t>(src_id);
  config_map_key = config_map_key << 32;
  config_map_key = config_map_key | static_cast<uint64_t>(src_nic_log.out_port);
  int switch_id = reader_->get_switch_id_from_node(config_map_key);

  //Loop over all the switches that occur in the path
  double prev_send_time = src_nic_log.head_leaves; // or src_nic_log.tail_leaves?
  uint64_t prev_config_map_key;

  while(switch_id != NO_SWITCH) { 
    std::multimap<double, log_info>& switch_log = reader_->
      get_switch_logs(switch_id).get_comp_log();
    std::multimap<double, log_info>::iterator sw_lb =
      switch_log.lower_bound(prev_send_time + LATENCY_ESTIMATE);
    std::multimap<double, log_info>::iterator sw_ub = switch_log.end();
    
    for(auto it = sw_lb; it != sw_ub; it++) {
      log_info& log_entry = it->second;
      if (log_entry.from_addr == n_info.from_addr &&
	  log_entry.to_addr == n_info.to_addr &&
	  log_entry.message_id == n_info.message_id) {

	//Found the log entry. add it to path vector
	path_info p_info_switch;
	p_info_switch.comp_id = switch_id;
	p_info_switch.comp_type = SWITCH;

	p_info_switch.arr_time = log_entry.arr_time;
	p_info_switch.dep_time = log_entry.head_leaves;//log_entry.tail_leaves;
	p_info_switch.link_delay = log_entry.arr_time-prev_send_time;
	p_info_switch.comp_delay = log_entry.head_leaves-log_entry.arr_time; //or tail_leaves
	path.push_back(p_info_switch);

	prev_send_time = log_entry.head_leaves; // or tail_leaves

	//Get the next switch, if present
	uint64_t config_map_key = static_cast<uint64_t>(switch_id);
	config_map_key = config_map_key << 32;
	config_map_key = config_map_key | static_cast<uint64_t>(log_entry.out_port);

	if (reader_->switch_log_exists(config_map_key)) {
	  switch_id = reader_->get_switch_id_from_switch(config_map_key);
	} else {
	  prev_config_map_key = config_map_key;
	  switch_id = NO_SWITCH;
	}
	
	break;
      }
    }
  }

  //Find destination nic log entry
  uint32_t dest_id = reader_->get_node_id_from_switch(prev_config_map_key);
  std::multimap<double, log_info>& dest_nic_log = reader_->get_nic_logs(dest_id).get_comp_log();

  std::multimap<double, log_info>::iterator nic_lb =
    dest_nic_log.lower_bound(prev_send_time + LATENCY_ESTIMATE);
  std::multimap<double, log_info>::iterator nic_ub =
    dest_nic_log.end();

  double nic_prev_send_time = prev_send_time;
  for(auto it = nic_lb; it != nic_ub; it++) {
    log_info& log_entry = it->second;
    if (log_entry.from_addr == n_info.from_addr &&
	log_entry.to_addr == n_info.to_addr &&
	log_entry.message_id == n_info.message_id) {
      //Add nic info to path vector
      path_info p_info_nic;
      p_info_nic.comp_id = dest_id;
      p_info_nic.comp_type = NIC;

      p_info_nic.arr_time = log_entry.arr_time;
      p_info_nic.dep_time = log_entry.head_leaves;//log_entry.tail_leaves;
      p_info_nic.link_delay = log_entry.arr_time-prev_send_time;
      p_info_nic.comp_delay = log_entry.head_leaves-log_entry.arr_time; // or log_entry.tail_leaves?
      path.push_back(p_info_nic);

      nic_prev_send_time = log_entry.head_leaves;
      break;
    }
  }

  //Find destination node log entry
  std::multimap<double, node_info>& node_log = reader_->
    get_node_logs(dest_id).get_comp_log();
  node_info& node_log_entry = node_log.lower_bound(nic_prev_send_time)->second;

  if(node_log_entry.from_addr == n_info.from_addr &&
     node_log_entry.to_addr == n_info.to_addr &&
     node_log_entry.message_id == n_info.message_id) {

    //Add node info to path vector
    path_info p_info_node;
    p_info_node.comp_id = dest_id;
    p_info_node.comp_type = NODE;

    p_info_node.arr_time = node_log_entry.recv_time;
    p_info_node.dep_time = 0;//node_log_entry.recv_time;
    p_info_node.link_delay = node_log_entry.recv_time-nic_prev_send_time;
    p_info_node.comp_delay = 0;
    path.push_back(p_info_node);
  }

  //Output(append) the path to a node specific file
  output_path(src_id, path);
}

/* ***** Print output on stdout
void
Path_Constructor::output_path(int node_id, std::vector<path_info>& path) {
  for(auto it = path.begin(); it != path.end(); it++) {
    std::cout << it->comp_id << "," << it->comp_type << "," << it->arr_time << "," << it->dep_time << "," << it->link_delay << "," << it->comp_delay << ";";
  }
  std::cout << std::endl;
}
*/

void
Path_Constructor::output_path(int node_id, std::vector<path_info>& path) {
  std::ofstream ofs;
  std::stringstream ss;
  ss << "path_" << node_id << ".log";
  ofs.open(ss.str().c_str(),std::ofstream::out | std::ofstream::app);
  for(auto it = path.begin(); it != path.end(); it++) {
    ofs << it->comp_id << "," << it->comp_type << "," << it->arr_time << "," << it->dep_time << "," << it->link_delay << "," << it->comp_delay << ";";
  }
  ofs << std::endl;
  ofs.close();
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
  struct stat buffer;
  if (stat ("path_0.log", &buffer) == 0) {
    std::cout << "Remove all path log files (Files of format path_**.log). Exiting\n";
    exit(0);
  }
  
  uint32_t node_ctr = 0;
  construct_node_paths(&node_ctr);
}
