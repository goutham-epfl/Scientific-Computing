//
// Created by Goutham Gopalakrishna on 21/10/19.
//

#ifndef WORK_ARRAY_HELPER_H
#define WORK_ARRAY_HELPER_H

#include <cassert>
#include <iostream>
#include <cmath>
#include <fstream>

void read(char *filename, double **&M, int &size1, int &size2);
void Read(const char *file_name, double **&M, int &n_rows, int &n_cols);
void read(char *filename, double *&v, int &size1);
void allocate(double **&C, int n_rows, int n_cols);
void deallocate(double **&C, int n_rows);
void multiply(double **A, double **B, double n_rows_A, double n_cols_A, double n_rows_B, double n_cols_B, double **&C);
void multiply(double **A, double *v, double n_rows_A, double n_cols_A, double n_elem, double *&c);
void print(double **M, int n_rows, int n_cols, std::ostream &os);
void print(double *v, int n_elem, std::ostream &os);


#endif //WORK_ARRAY_HELPER_H
