#include <mpi.h>
#include <stddef.h>
#include <stdio.h>

#define sstmac_app_name sendrecv

#define ROW 1000
#define COL (1L << 20)

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
  if (rank == 0){
    int partner = 7;
    for (unsigned int i = 0; i < ROW; i++) {
      //for (unsigned int j = 0; j < COL; j++) {
	MPI_Send(buf[i], COL, MPI_INT, partner, tag, MPI_COMM_WORLD);	
	//}
    }

    //MPI_Send(buf, SZ, MPI_INT, partner, tag, MPI_COMM_WORLD);
    //MPI_Send(NULL, 1, MPI_INT, partner, tag, MPI_COMM_WORLD);
  } else {
    int partner = 0;
    for (unsigned int i = 0; i < ROW; i++) {
      //for (unsigned int j = 0; j < COL; j++) {    
	MPI_Recv(buf[i], COL, MPI_INT, partner, tag, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
	//}
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
