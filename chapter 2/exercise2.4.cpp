//
// Created by Goutham Gopalakrishna on 30/09/19.
//

#include <iostream>
int main(){
    std::cout<<"Exercise 2.4 \n";
    double u[3] = {1.0,2.0,3.0};
    double v[3] = {6.0,5.0,4.0};
    double A[3][3] = {{1.0, 5.0, 0.0}, {7.0, 1.0, 2.0},
                            {0.0, 0.0, 1.0}};

    double B[3][3] =  {{-2.0, 0.0, 1.0},
                        {1.0, 0.0, 0.0},
                        {4.0, 1.0, 0.0}};

    // w
    double w[3];
    for (int i=0;i<3; i++){
        w[i] = u[i] - 3.0 * v[i];
    }

    // x
    double x[3] = {0,0,0};
    for (int i =0; i<3; i++){
        x[i] = u[i] - v[i];
    }

    // y = Av
    double y[3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            y[i] = y[i] + A[i][j] * v[i];
        }

    }



    //print w
    std::cout << "The value of w is: \t";
    for(int i=0; i<3; i++){
        std::cout << w[i] << "\t";
    }
    //print x

    std::cout <<"\n The value of x is: \t";
    for(int i=0;i<3;i++){
        std::cout <<x[i] << "\t";
    }

    //print y

    std::cout <<"\n The value of y is: \t";
    for(int i=0;i<3;i++){
        std::cout <<y[i] << "\t";
    }



    return 0;
}
