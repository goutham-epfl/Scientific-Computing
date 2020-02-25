//
// Created by Goutham Gopalakrishna on 21/10/19.
//

#include <iostream>
#include <fstream>
#include <cassert>
#include "array_helper.h"


int main(int argc, char *argv[]){

    if(argc!=3){
        std::cout <<"Try again!";
        return -1;
    }

    char *filename1 = argv[1];
    char *filename2 = argv[2];

    double **A;
    double **B;
    int m, n, p,q;

    read(filename1, A, m, n);
    read(filename2, B, p, q); //be very careful with dynamic memory allocation. Passing A instead of B by mistake messes up the execution (Wasted 2 hrs!)

    double **C;


    allocate(C, m,q);
    multiply(A, B, m, n, p, q, C);

    std::cout << "Matrix A: " << std::endl;
    print(A, m, n, std::cout);
    std::cout << "Matrix B: " << std::endl;
    print(B, p, q, std::cout);
    std::cout << "The product of A and B is: " << std::endl;
    print(C, m, q, std::cout);

    deallocate(A, m);
    deallocate(B, p);
    deallocate( C, m);

    return 0;



}

