//
// Created by Goutham Gopalakrishna on 14/10/19.
//

#include <iostream>
#include <cmath>
void passOrFail(double score, double passMark);
double hasNoEffect(double x);
double** allocateMemory(int a, int b);
void deAllocateMemory(int rows, double** matrix);
void calculateRealAndImaginary(double r, double theta, double *real, double* imaginary);
void doSomething(double u[]);
void doSomethingDynamically(double v[]);
void computeScalarProduct(double *p_vec1, double *p_vec2, double length, double *product);
void newtonMethod(double &x, double k, int max_iterations = 1000, double tol = 1.0e-6);
double myFunction(double x);
double mySecondFunction(double x);
double solveNewton(double (*func)(double), double (*funcprime)(double), double x);
double sqrt10(double x);
double sqrt10prime(double x);
double cube10(double x);
double cube10prime(double x);
int factorial(int x);

int main(int argc, char* argv []){
    double score = 50.0;
    double passMark = 60.0;
    passOrFail(score, passMark);

    hasNoEffect(score);
    std::cout << score << std::endl;

    double **A;
    int rows=2, cols=2; //if you forget to assign values to rows, cols, std::malloc error will be displayed
    A = allocateMemory(rows, cols);

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            A[i][j] = i+j;

        }
    }
    //for some reason i cannot print this
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            std:: cout << A[i][j] << "\t";
        }
    }
    std::cout <<&A[0] << std::endl;
    deAllocateMemory(rows,A);

    //calculate real and imaginary part by passing pointers
    double r, theta, real, imaginary;
    r = 3.4;
    theta = 1.23;
    calculateRealAndImaginary(r, theta, &real, &imaginary);
    std::cout << "real part is: " << real << std::endl << "IMag part is: " << imaginary << std::endl;

    //pass an array
    double u[3];
    doSomething(u);
    std::cout << u[0] << std::endl;

    double *v;
    v= new double [3];
    doSomethingDynamically(v);
    std::cout << v[0] << std::endl;
    delete[] v;

    //compute scalar product
    double *vec1, *vec2;
    int length = 3;
    vec1 = new double[length];
    vec2 = new double [length];
    for(int i=0; i<3; i++){
        vec1[i] = i;
        vec2[i] = 3*i;
    }
    double *product;
    product = new double;
    computeScalarProduct(vec1, vec2, length, product);
    std::cout << "The value of scalar product is: " << length << std::endl;
    delete [] vec1;
    delete [] vec2;
    delete product;

    //newton method
    double x;
    x = 1.0;
    double k;
    k = 16.0;
    int max_iterations;
    double tol;
    newtonMethod(x, k, max_iterations, tol);
    std::cout << "The solution to the equation using newton method is: " << x << std::endl;

    //passing pointers to functions
    double (*p_func1) (double x);
    double (*p_func2) (double x);
    p_func1 = &myFunction;
    std::cout << p_func1(2.0) << std::endl;
    p_func2 = &mySecondFunction;
    std::cout << p_func2(2.0) << std::endl;

    //Newton rhaphson method using function pointers
    std::cout << "Root sqrt(x)=10, with guess 1.0 is " << solveNewton(sqrt10, sqrt10prime, 1.0) << std::endl;
    std::cout << "Root x^3=10, with guess 1.0 is " << solveNewton(cube10, cube10prime, 1.0) << std::endl;

    //recursive functions
    int n=5;
    std::cout << "The factorial of 5 is: " << factorial(n) << std::endl;

    return 0;

}

void passOrFail(double score, double passMark){
 if(score < passMark){
     std::cout << "Good luck next time" << std::endl;
 }else{
     std::cout << "You have passed!";
 }
}

double hasNoEffect(double x){
    x = 60;
    return x;
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

void calculateRealAndImaginary(double r, double theta, double *p_real, double* p_imaginary){
    *p_real = r*cos(theta);
    *p_imaginary = r*sin(theta);
}

void doSomething(double u[]){
    u[0]=100000;
}

void doSomethingDynamically(double v[]){
    v[0] = 99999;
}

void computeScalarProduct(double *p_vec1, double *p_vec2, double length, double *product){

    for(int i=0; i<length; i++){
        *product = *product + p_vec1[i] * p_vec2[i];
    }

}

void newtonMethod(double &x, double k, int max_iterations, double tol ){
    double err = 100;
    double x_new;
    while(err > tol){
        x_new = x - (x*x*x - k)/(3*x*x);
        err = fabs(x*x*x - k);
        x = x_new;
    }
}

double myFunction(double x){
    return x*x;
}

double mySecondFunction(double x){
    return x*x*x;
}

double sqrt10(double x){
    return x*x - 10;

}

double sqrt10prime(double x){
    return 2*x;
}

double cube10(double x){
    return x*x*x-10;
}

double cube10prime(double x){
    return 3*x*x;
}

double solveNewton(double (*func)(double), double (*funcprime)(double), double x){
    double tol = 1.0e-6;
    double err = 1;
    int iterations = 0;
    int maxIterations = 100;
    while((err>tol) & (iterations < maxIterations)){
        x = x - (*func)(x)/(*funcprime)(x);
        err = fabs((*func)(x)/(*funcprime)(x));
    }
    return x;
}

int factorial(int n){
    if(n==1){
        return 1;
    }
    else
        {
        return n * factorial(n-1);
    }
}