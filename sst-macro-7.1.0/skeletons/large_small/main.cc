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

