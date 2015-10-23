#include <mpi.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	int id;
	int p;
	
	MPI_Init(&argc, &argv);

	MPI_Barrier(MPI_COMM_WORLD);

	MPI_Comm_rank (MPI_COMM_WORLD, &id);
	MPI_Comm_size (MPI_COMM_WORLD, &p);

	printf("Hello! from id:%d size:%d\n",id,p);
	MPI_Finalize();
}
