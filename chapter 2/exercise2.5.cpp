//
// Created by Goutham Gopalakrishna on 07/10/19.
//

#include <iostream>
#include <cassert>

int main(int argc, char *argv[]){
    double A[2][2] = {{4,10}, {1,10}};
    std::cout << "The matrix A is: \n";
    for(int i =0; i<2; i++){
        for (int j =0; j<2; j++){
            std::cout << A[i][j] << "\t";
        }

    }
    std::cout << "\n";
    double det = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    assert(det!=0);
    std::cout << det << "\n";
    double A_inv[2][2];
    for(int i =0; i<2; i++){
        for (int j =0; j<2; j++){
            A_inv[i][j] = A[i][j]/det;
        }

    }
    std::cout << "The inverse of matrix A is :\n";
    for(int i =0; i<2; i++){
        for (int j =0; j<2; j++){
            std::cout << A_inv[i][j] << "\t";
        }

    }


}