//
// Created by Goutham Gopalakrishna on 07/10/19.
//

#include <iostream>
#include <cmath>

int main(){
    double tol = 1e-6;
    int nMax = 1000;
    double x_prev = 0.0;
    double x_next = 0.0;
    int nIter = 0;

    do{
        x_prev = x_next;
        x_next = x_prev - (exp(x_prev) + pow(x_prev,3) - 5)/(exp(x_prev) + 3 * pow(x_prev,2));
        double err_x = abs(x_next - x_prev);
        ++nIter;
        std::cout << nIter << "\t" << x_next << "\t" << err_x << "\n";
    }while(abs(x_next - x_prev) > tol);

    if((nIter>nMax) | (abs(x_next - x_prev) > tol)){
        std::cout << "Max iterations reached";
    } else {
        std::cout << "Final value is: \t" << x_next;
    }



}
