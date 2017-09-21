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

#define sstmac_app_name onesided

#define NUM_ELEMENT 4

int main(int argc, char** argv)
{
  int i,len, localbuffer[NUM_ELEMENT], sharedbuffer[NUM_ELEMENT];
  int id, size;
  MPI_Win win;
  
  MPI_Init(&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &id);
  MPI_Comm_size(MPI_COMM_WORLD, &size);

  MPI_Win_create(sharedbuffer, NUM_ELEMENT, sizeof(int), MPI_INFO_NULL, MPI_COMM_WORLD, &win);

  for (i = 0; i < NUM_ELEMENT; i++) {
    sharedbuffer[i] = 10*id + i;
    localbuffer[i] = 0;
  }

  printf("Rank %d sets data in the shared memory:", id);

  for (i = 0; i < NUM_ELEMENT; i++) {
    printf(" %02d", sharedbuffer[i]);
  }
  printf("\n");

  MPI_Win_fence(0, win);

  if (id != 0) {
    MPI_Get(&localbuffer[0], NUM_ELEMENT, MPI_INT, id-1, 0, NUM_ELEMENT, MPI_INT, win);
  } else {
    MPI_Get(&localbuffer[0], NUM_ELEMENT, MPI_INT, size-1, 0, NUM_ELEMENT, MPI_INT, win);
  }

  MPI_Win_fence(0, win);

  printf("Rank %d gets data from the shared memory:", id);
  for (i = 0; i < NUM_ELEMENT; i++){
    printf(" %02d", localbuffer[i]);
  }
  printf("\n");

  MPI_Win_free(&win);
  MPI_Finalize();

  return 0;
}

