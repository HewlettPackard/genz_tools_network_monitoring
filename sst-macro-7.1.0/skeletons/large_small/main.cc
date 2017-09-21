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

#define ROW 10
#define COL (1L << 28)

#define COL_SMALL (1L << 6)

int main(int argc, char** argv)
{
  MPI_Init(&argc, &argv);
  int rank, size;
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);

  int* buf = new int[COL];
  // for (unsigned int i = 0; i < ROW; i++) {
  //   buf[i] = new int[COL];
  // }

  int* buf_small = new int[COL_SMALL];
  // for (unsigned int i = 0; i < ROW; i++) {
  //   buf_small[i] = new int[COL_SMALL];
  // }
  
  int tag = 42;
  if (rank == 0) {
    int partner = 7;
    //for (unsigned int i = 0; i < ROW; i++) {
    MPI_Send(buf, COL, MPI_INT, partner, tag, MPI_COMM_WORLD);
    MPI_Send(buf_small, COL_SMALL, MPI_INT, partner, tag, MPI_COMM_WORLD);
    //}
  } else if (rank == 7){
    int partner = 0;
    //for (unsigned int i = 0; i < ROW; i++) {
    MPI_Recv(buf, COL, MPI_INT, partner, tag, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    MPI_Recv(buf_small, COL_SMALL, MPI_INT, partner, tag, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    //}
  }

  MPI_Barrier(MPI_COMM_WORLD);

  if (rank == 0){
    printf("Rank 0 finished at t=%8.4f ms\n", MPI_Wtime()*1e3);
  }
  
  MPI_Finalize();


  return 0;
}

