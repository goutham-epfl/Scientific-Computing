//
// Created by Goutham Gopalakrishna on 07/10/19.
//

#include <iostream>
#include <fstream>
#include <cmath>

int main(int argc, char* argv[]){
    double *p_x;
    double y = 10 ;
    p_x = &y;

    std::cout << "The pointer value is" << p_x << "\n";

    //dynamic allocaiton
    double *p_z;
    p_z = new double;
    *p_z = 10;
    std::cout << "The pointer value is: " << *p_z << "\n";

    //dynamic allocaiton for vectors
    double *p_v;
    p_v = new double [10];
    for(int i=0;i<10;i++){
        p_v[i] = double(i);
    }
    delete p_z;
    delete[] p_v;


    //matrices A contains pointers to pointers. Dynamic memory allocation
    int rows = 5, cols = 4;
    double **A;
    A = new double *[rows];
    for(int i=0;i<rows;i++){
        A[i] = new double [cols];
    }

    A[0][1] = 5.0;
    for(int i=0; i<rows; i++){
        for(int j=0;j<cols;j++){
            std::cout<< A[i][j] << "\t" << std::endl;
        }
    }
    delete[] A;
    //trial
    int xx = 3;
    int *p_xx = &xx;
    std::cout << *p_xx;

    char name[250] = "yopla";
    char *ptr = name;

    double **B;
    B = new double* [5];
    for(int i=0;i<5;i++){
        B[i] = new double [3];
    }
    delete[] B;

    //Dynamic memory allocation for lower triangular matrix
    int** AA;
    AA = new int* [1000];
    for(int i=9; i<1000; i++){
        AA[i] = new int[i+1];
    }

    delete[] AA;


    return 0;
}