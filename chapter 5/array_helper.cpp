//
// Created by Goutham Gopalakrishna on 21/10/19.
//

#include <cassert>
#include <cmath>
#include <iostream>
#include <fstream>

#include "array_helper.h"

void read(char *filename, double **&M, int &size1, int &size2){
    std::ifstream input_file(filename, std::ifstream::in);

    input_file >> size1 >> size2;

    M = new double *[size1];
    for(int i=0; i<size1; ++i){
        M[i] = new double [size2];
        for(int j=0; j<size2; ++j){
            input_file >> M[i][j];
        }
    }
    input_file.close();
}

void Read(const char *file_name, double **&M, int &n_rows, int &n_cols) {
    std::ifstream input_file(file_name, std::ifstream::in);

    input_file >> n_rows >> n_cols;

    M = new double *[n_rows];

    for (int i = 0; i < n_rows; ++i) {
        M[i] = new double[n_cols];
        for (int j = 0; j < n_cols; ++j) {
            input_file >> M[i][j];
        }
    }

    input_file.close();
}

void read(char *filename, double *&V, int &size1) {
    std::ifstream input_file(filename, std::ifstream::in);
    input_file >> size1;

    V = new double [size1];
    for (int i = 0; i < size1; ++i) {
        input_file >> V[i];
    }
    input_file.close();
}

void allocate(double **&C, int n_rows, int n_cols) {
    C = new double *[n_rows];
    for (int i = 0; i < n_rows; ++i) {
        C[i] = new double[n_cols];
    }
}



void deallocate(double **&C, const int n_rows) {
    for(int i=0; i<n_rows; ++i){
        delete[] C[i];
    }
    delete[] C;
}



//Multiply matrix C=A*B
void multiply(double **A, double **B, double n_rows_A, double n_cols_A, double n_rows_B, double n_cols_B, double **&C){
    if(n_cols_A!=n_rows_B){
        std::cout << "Invalid dimensions!" << std::endl;
    } //this whole thing can be replaced with assert(n_cols_A == n_rows_B);

    for(int i=0; i<n_rows_A; ++i){
        for(int j=0; j<n_cols_B; ++j){
            C[i][j] = 0;
            for(int k=0; k<n_cols_A; ++k){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

}

//Multiply matrix with vector c=A*v
void multiply(double **A, double *v, double n_rows_A, double n_cols_A, double n_elem, double *&c){
    assert(n_cols_A == n_elem);
    for (int i = 0; i < n_rows_A; ++i) {
        c[i] = 0;
        for (int j = 0; j < n_cols_A; ++j) {
            c[i] += v[j] * A[i][j];
        }
    }
}


//Multiply vector with matrix c = v*A
void multiply(double *v, double **A, double n_elem, double n_rows_A, double n_cols_A, double *&c) {
    for (int i = 0; i < n_cols_A; ++i) {
        c[i] = 0;
        for (int j = 0; j < n_rows_A; ++j) {
            c[i] += v[j] * A[j][i];
        }
    }
}

void print(double **M, int n_rows, int n_cols, std::ostream &os){
    for(int i=0; i<n_rows; ++i){
        for(int j=0; j<n_cols; ++j){
            os << M[i][j] << "\t";
        }
        os << std::endl;
    }
}

void print(double *v, int n_elem, std::ostream &os){
    for(int i=0; i<n_elem; ++i){
        os << v[i] << "\t";
    }
}

