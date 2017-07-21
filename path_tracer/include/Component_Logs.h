#ifndef COMPONENT_LOGS_H_INCLUDED
#define COMPONENT_LOGS_H_INCLUDED

#include <map>

template <class T>
class Component_Logs {

 public:
  void insert(double time, T log) {
    comp_log_.insert(std::pair<double,T>(time,log));
  }

 protected:
  std::multimap<double, T> comp_log_;
};

#endif
