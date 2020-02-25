//
// Created by Goutham Gopalakrishna on 19/10/19.
//

#include <iostream>
#include <cmath>
void printStuff(double *p_x);
void changeStuff(double *p_x);
void swap1(double *p_x1, double *p_x2);
void swap2(double &x, double &y);
void statistics(double *v, int size, double &mean, double &sd); //two ways to pass v: *v and *&v. both gives equivalent results.



int main(int argc, char* argv[]){
    //5.1 and 5.2
    double x = 5.0;
    printStuff(&x);
    //do another way 5.1
    double *p_x;
    //p_x = &x;
    p_x = new double;
    *p_x = 10;
    std::cout << *p_x << std::endl;
    printStuff(p_x);
    changeStuff(p_x);


    //5.3 swap stuff
    double x1, x2;
    x1=10.;
    x2 = 900.;
    double *p_x1, *p_x2;
    p_x1 = &x1;
    p_x2 = &x2;
    std::cout << "The value before swapping is: " << *p_x1 << "\t" << *p_x2 << std::endl;
    swap1(p_x1, p_x2);
    std::cout << "The value after swapping is: " << *p_x1 << "\t" << *p_x2 << std::endl;
    swap2(x1, x2);
    std::cout << "The value after second swapping is: " << *p_x1 << "\t" << *p_x2 << std::endl;


    //5.4 calculate mean and sd
    int size = 10;
    double *v;
    v = new double[size];
    for(int i = 0; i<size; i++){
        v[i] = 4*i;
    }
    double mean=0;
    double sd = 0;
    statistics(v, size, mean, sd);
    std::cout << "The mean and sd are: " << mean << "\t" << sd << std::endl;

    delete [] v;
    //5.4 write function to multiply two matrices



}


void printStuff(double *p_x){
    std::cout << *p_x << std::endl;
}

void changeStuff(double *p_x){
    *p_x = 30;
    std::cout << *p_x << std::endl;
}

void swap1(double *p_x1, double *p_x2){
    double temp_p;
    temp_p = *p_x2;
    *p_x2 = *p_x1;
    *p_x1 = temp_p;

}

void swap2(double &x, double &y){
    double temp_p2;
    temp_p2 = x;
    x = y;
    y = temp_p2;
}

void statistics(double *v, int size, double &mean, double&sd){
    for(int i=0; i<size; i++){
        mean += v[i];
    }
    mean = mean/size;

    for(int i=0; i<size; i++){
        sd = pow((v[i] - mean),2);
    }
    sd = std::sqrt(sd/(size-1));
}

