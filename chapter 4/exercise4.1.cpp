//
// Created by Goutham Gopalakrishna on 09/10/19.
//

#include <iostream>

int main(int argc, char *argv[]){
    int i =5;
    int * p_j = &i;
    *p_j = *p_j * 5;
    int * p_k;
    p_k = new int;
    *p_k = *p_j;
    std::cout << *p_j << std::endl;

    //4.2
    int a = 5, b=6;
    int *p_a = &a;
    int* p_b = &b;

    int *p_c = new int;
    *p_c = *p_b;
    *p_a = *p_c;
    std::cout << *p_a << "\t" << *p_b;


    double *v1, *v2;
    v1 = new double [3];
    v2 = new double [3];

    //assign value to these vectors
    for(int i=0; i<3; i++){
        v1[i] = i;
        v2[i] = 10 + i;
    }

    double prod;
    for(int i=0;i<3;i++){
        prod =+  v1[i]*v2[i];
    }
    std::cout << "The product is: " << prod << std::endl;
    delete[] v1;
    delete[] v2;


    //giant for-loop
    for(int j=0; j<1000000000; j++){
        double *v1, *v2;
        v1 = new double [3];
        v2 = new double [3];

        //assign value to these vectors
        for(int i=0; i<3; i++){
            v1[i] = i;
            v2[i] = 10 + i;
        }

        double prod;
        for(int i=0;i<3;i++){
            prod =+  v1[i]*v2[i];
        }
        if(j==99999999){
            std::cout << "The product is: " << prod << std::endl;
        }

        delete[] v1;
        delete[] v2;

    }
    std::cout << "Giant for-loop has finished running!";

}

