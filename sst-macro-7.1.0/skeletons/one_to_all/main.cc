#include <mpi.h>
#include <stddef.h>
#include <stdio.h>

#define sstmac_app_name sendrecv

#define ROW 100
#define COL (1L << 20)

#define SENDER 25

int main(int argc, char** argv)
{
  MPI_Init(&argc, &argv);
  int rank, size;
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);

  int** buf = new int*[ROW];
  for (unsigned int i = 0; i < ROW; i++) {
    buf[i] = new int[COL];
  }
 
  int tag = 42;
  if (rank == SENDER){
    for (unsigned int p = 0; p < 100; p++) {
      for (unsigned int i = 0; i < ROW; i++) {
	MPI_Send(buf[i], COL, MPI_INT, p, tag, MPI_COMM_WORLD);	
      }
    }
  } else {
    for (unsigned int i = 0; i < ROW; i++) {
      MPI_Recv(buf[i], COL, MPI_INT, SENDER, tag, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    }
  }

  MPI_Barrier(MPI_COMM_WORLD);

  if (rank == 0){
    printf("Rank 0 finished at t=%8.4f ms\n", MPI_Wtime()*1e3);
  }
  
  //delete buf;
  MPI_Finalize();


  return 0;
}

