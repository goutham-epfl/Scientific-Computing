//
// Created by Goutham Gopalakrishna on 30/09/19.
//

#include <iostream>

double** allocateMemory(int a, int b);
void deAllocateMemory(int rows, double** matrix);

int main(int argc, char* argv []){
    double **A;
    int rows, cols;
    rows=2; cols=2;
    A = allocateMemory(rows, cols);

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            A[i][j] = i+j;

        }
    }
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
        std:: cout << A[i][j] << "\t";
        }
    }

    std::cout << A[0][0];

    deAllocateMemory(rows,A);

}


double** allocateMemory(int a, int b){
    double **A_temp;
    A_temp = new double *[a];
    for(int i=0; i<a; i++){
        A_temp[i] = new double [b];
    }

    return A_temp;
}

void deAllocateMemory(int a, double** matrix){
    for(int i=0; i<a; i++){
        delete [] matrix[i];
    }
    delete[] matrix;
}