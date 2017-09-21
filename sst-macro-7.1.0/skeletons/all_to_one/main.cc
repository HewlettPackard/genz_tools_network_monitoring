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

#include <mpi.h>
#include <stddef.h>
#include <stdio.h>

#define sstmac_app_name sendrecv

#define RANKS 128
#define ROW 10000
#define COL (1L << 10)

#define PARTNER 42

int main(int argc, char** argv)
{
  MPI_Request req;
  MPI_Init(&argc, &argv);
  int rank, size;
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);

  int** buf = new int*[ROW];
  for (unsigned int i = 0; i < ROW; i++) {
    buf[i] = new int[COL];
  }
 
  int tag = 42;
  if (rank != PARTNER){
    int partner = PARTNER;
    for (unsigned int i = 0; i < ROW; i++) {
      //for (unsigned int j = 0; j < COL; j++) {
      MPI_Isend(buf[i], COL, MPI_INT, partner, tag, MPI_COMM_WORLD, &req);
	//}
    }

    //MPI_Send(buf, SZ, MPI_INT, partner, tag, MPI_COMM_WORLD);
    //MPI_Send(NULL, 1, MPI_INT, partner, tag, MPI_COMM_WORLD);
  } else {
    for (unsigned int p = 0; p < RANKS; p++) {
      if (p != PARTNER) {
	for (unsigned int i = 0; i < ROW; i++) {
	  //for (unsigned int j = 0; j < COL; j++) {    
	  MPI_Irecv(buf[i], COL, MPI_INT, p, tag, MPI_COMM_WORLD, &req);
	  //}
	}
      }
    }
    //MPI_Recv(buf, SZ, MPI_INT, partner, tag, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    //MPI_Recv(NULL, 1, MPI_INT, partner, tag, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
  }

  MPI_Barrier(MPI_COMM_WORLD);

  if (rank == 0){
    printf("Rank 0 finished at t=%8.4f ms\n", MPI_Wtime()*1e3);
  }
  
  //delete buf;
  MPI_Finalize();


  return 0;
}
