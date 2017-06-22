/**
Copyright 2009-2017 National Technology and Engineering Solutions of Sandia, 
LLC (NTESS).  Under the terms of Contract DE-NA-0003525, the U.S.  Government 
retains certain rights in this software.

Sandia National Laboratories is a multimission laboratory managed and operated
by National Technology and Engineering Solutions of Sandia, LLC., a wholly 
owned subsidiary of Honeywell International, Inc., for the U.S. Department of 
Energy's National Nuclear Security Administration under contract DE-NA0003525.

Copyright (c) 2009-2017, NTESS

All rights reserved.

Redistribution and use in source and binary forms, with or without modification, 
are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.

    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.

    * Neither the name of Sandia Corporation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Questions? Contact sst-macro-help@sandia.gov
*/

#ifndef sumi_api_DENSE_RANK_MAP_H
#define sumi_api_DENSE_RANK_MAP_H

#include <set>
#include <sumi/communicator_fwd.h>
#include <sumi/thread_safe_set.h>

namespace sumi {

/**
* @class dense_rank_map
* physical <= dense <= virtual
* sparse rank is a synonym for physical.
* It's the rank you started with when there were no failures
* A job starts with 3 nodes {0,1,2}.
* Node 1 dies. There are 2 live nodes.
* 0 -> 0
* 2 -> 1
*/
class dense_rank_map {

 public:
  int dense_rank(int sparse_rank) const;

  int sparse_rank(int dense_rank) const;

  dense_rank_map();

  dense_rank_map(const thread_safe_set<int>& failed, communicator* dom = 0);

  ~dense_rank_map();

  void
  init(const thread_safe_set<int>& failed, communicator* dom = 0);

 protected:
  static const int tree_cutoff = 4;

  /**
   * O(N) search algorithm for new rank for N = # failures
   * @param sparse_rank
   * @return
   */
  int 
  linear_find_rank(int sparse_rank) const;

  /**
   * O(log N) search algorithm for new rank,
   * but with larger prefactor for N = # failures
   * @param sparse_rank
   * @return
   */
  int 
  tree_find_rank(
    int sparse_rank,
    int offset,
    int num_failed_ranks,
    int* failed_array) const;

 protected:
  int num_failed_ranks_;
  int* failed_ranks_;

};

}

#endif // DENSE_RANK_MAP_H