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

