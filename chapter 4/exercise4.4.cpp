//
// Created by Goutham Gopalakrishna on 13/10/19.
//

#include <iostream>

int main(int argc, char* argv[]){

    double **A, **B, **C;
    A = new double * [2];
    B = new double * [2];
    C = new double * [2];
    for(int i = 0; i<2; i++){
        A[i] = new double [2];
        B[i] = new double [2];
        C[i] = new double [2];

    }

    for(int i =0; i<2; i++){
        for(int j=0; j<2; j++){
            A[i][j] = i + j;
            B[i][j] = 2*(i + j);
            C[i][j] = 3*(i + j);

        }
    }

    //C = A   +   B
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    std::cout << "The value of C is: " << C << std::endl;



    //DELETE memory
    for(int i=0; i<2; i++){
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }

    delete [] A;
    delete [] B;
    delete [] C;

    //write giant for loop
    for(int i=0; i<1000000000; i++){
        double **A, **B, **C;
        A = new double * [2];
        B = new double * [2];
        C = new double * [2];
        for(int i = 0; i<2; i++){
            A[i] = new double [2];
            B[i] = new double [2];
            C[i] = new double [2];

        }

        for(int i =0; i<2; i++){
            for(int j=0; j<2; j++){
                A[i][j] = i + j;
                B[i][j] = 2*(i + j);
                C[i][j] = 3*(i + j);

            }
        }

        //C = A   +   B
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        if(i == 99999999){
            std::cout << "The value of C is: " << *C << std::endl;
        }




        //DELETE memory
        for(int i=0; i<2; i++){
            delete[] A[i];
            delete[] B[i];
            delete[] C[i];
        }

        delete [] A;
        delete [] B;
        delete [] C;
    }
    return 0;

}