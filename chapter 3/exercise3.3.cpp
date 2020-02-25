//
// Created by Goutham Gopalakrishna on 07/10/19.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <cassert>

int main(int argc, char *argv[]){
    int N = atoi(argv[1]);
    assert(N>1);
    double y[N], x[N];
    double h = 1.0/N; //if you specify 1/N h will be set to 0
    std::cout << "The number of grid points is: \t" << N << "\n";
    std::cout << "The computed step size is: \t" << h << "\n";
    double tol = 1e-6;
    int nMax = 100;

    y[0] = 1;
    for(int i=1;i<=N; i++){
        y[i] = y[i-1] - h * y[i-1];
        x[i] = x[i-1] + h;
    }
    std::ofstream write_file("xy.txt");
    assert(write_file.is_open());
    write_file.precision(6);
    //write_file.setf(std::ios::scientific);
    //write_file.setf(std::ios::showpos);
    for(int i=0; i<=N; i++){
        write_file << "The value of x is:" << x[i] << "\t" <<  "The value of y is: "  << y[i] << "\n";
    }
    write_file.close();
}