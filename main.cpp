//
// Created by alhassaneba on 16/01/2022.
//

#include <iostream>
#include <mpi/mpi.h>

int main(int argc, char* argv[]){


    First illustration
    int rank, size;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    std::cout<<"ID  : " <<rank<< " Hello world ! \n";







    MPI_Finalize();



    return 0;
}


