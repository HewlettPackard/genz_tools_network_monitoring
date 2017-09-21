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

#ifndef PATH_CONSTRUCTOR_H_INCLUDED
#define PATH_CONSTRUCTOR_H_INCLUDED

#include "Log_Reader.h"
#include "path_info.h"
#include <vector>

class Path_Constructor {
 private:
  void construct_node_paths(uint32_t* node_ctr);
  void construct_path(node_info& n_info);
  
 public:
  Path_Constructor(Log_Reader* reader);
  void construct_all_paths();
  void output_path(int node_id, std::vector<path_info>& path);
 protected:
  Log_Reader* reader_;
  /*2-dim vector to hold all paths*/
  //std::vector<vector<path_info> > all_paths;
};

#endif
