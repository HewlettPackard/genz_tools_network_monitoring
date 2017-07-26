#ifndef COMPONENT_LOGS_H_INCLUDED
#define COMPONENT_LOGS_H_INCLUDED

#include <map>

#include "monitor_logger_ascii.h"

template <class T>
class Component_Logs {

 public:
  void print(std::string filename) {
    monitor_logger<T> printer(filename);
    for(auto it = comp_log_.begin();it != comp_log_.end();it++) {
      printer.recv(&(it->second));
    }
  }
  
  void insert(double time, T log) {
    comp_log_.insert(std::pair<double,T>(time,log));
  }

  std::multimap<double, T>& get_comp_log() {
    return comp_log_;
  }

 protected:
  std::multimap<double, T> comp_log_;
};

#endif
