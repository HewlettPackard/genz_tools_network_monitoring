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

// RegisterDebugSlot(log_drainer)

// RegisterKeywords("drainer_name");
// RegisterNamespaces("drainer");

#include <sstmac/hardware/pisces/pisces_log_drainer.h>
#include <sstmac/hardware/pisces/pisces.h>

namespace sstmac {
  namespace hw {

    pisces_log_drainer::~pisces_log_drainer()
    {
    }

    pisces_log_drainer::pisces_log_drainer(sprockit::sim_parameters* params, event_scheduler* parent)
      : log_drainer(params, parent)
    {
      payload_handler_ = new_handler(const_cast<pisces_log_drainer*>(this),
				     &pisces_log_drainer::handle_payload);
    }
    
    void
    pisces_log_drainer::handle_payload(event *ev)
    {
      //First extract log from packet.
      auto pkt = static_cast<pisces_log_packet*>(ev);
      logger_->recv(pkt->get_log());

      //Next send back credit
      pisces_credit* credit = new pisces_credit(src_outport_,
						0, pkt->num_bytes());
      timestamp credit_departure = now();
      
      send_to_link(credit_departure,
		   credit_lat_,
		   src_handler_,
		   credit);
    }
  }
}
