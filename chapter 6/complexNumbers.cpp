//
// Created by gopalakr@INTRANET.EPFL.CH on 28.10.19.
//

#include "complexNumbers.h"
#include <cmath>

complexNumbers::complexNumbers() {
    realPart = 0.0;
    imPart = 0.0;
}

complexNumbers::complexNumbers(double x, double y) {
    realPart = x;
    imPart = y;
}

//copy constructor
complexNumbers::complexNumbers(const complexNumbers &c): realPart(c.getRealPart()), imPart(c.getImPart()) {
}
complexNumbers::complexNumbers(double x) {
realPart = x;
imPart = 0;
}

double complexNumbers::calculateModulus() const {
    return sqrt(pow(realPart,2) + pow(imPart,2));
}


double complexNumbers::calculateArgument() const {
    return atan2(imPart,realPart);

}

complexNumbers complexNumbers::calculatePower(double n) const {
    double modulus = calculateModulus();
    double argument = calculateArgument();
    double mod_of_result = pow(modulus,n);
    double arg_of_result = argument*n;
    double real_part = mod_of_result*cos(arg_of_result);
    double im_part = mod_of_result*sin(arg_of_result);
    complexNumbers z(real_part, im_part);
    return z;

}

complexNumbers& complexNumbers::operator=(const complexNumbers &z)  {
    realPart = z.realPart;
    imPart = z.imPart;
    return *this;
}


complexNumbers complexNumbers::operator-() const { //what is this doing???
    complexNumbers w;
    w.imPart=-imPart;
    w.realPart=-realPart;
    return w;
}

complexNumbers complexNumbers::operator+(const complexNumbers &z) const {
    complexNumbers w;
    w.realPart = realPart + z.realPart;
    w.imPart = imPart + z.imPart;
    return w;
}


complexNumbers complexNumbers::operator-(const complexNumbers &z) const {
    complexNumbers w;
    w.realPart = realPart - z.realPart;
    w.imPart = imPart - z.imPart;
    return w;
}

// Overloading the insertion << operator
std::ostream &operator<<(std::ostream &output, const complexNumbers &z) {
    // Format as "(a + bi)" or as "(a - bi)"
    output << "(" << z.realPart << " ";
    if (z.imPart >= 0.0) {
        output << "+ " << z.imPart << "i)";
    } else {
        // z.mImaginaryPart < 0.0
        // Replace + with minus sign
        output << "- " << -z.imPart << "i)";
    }

    return output;
}

double complexNumbers::getRealPart() const {
    return realPart;
}

double complexNumbers::getImPart() const {
    return imPart;
}

double realPartFriend(complexNumbers &z) {
    return z.realPart;
}

double imaginaryPartFriend(complexNumbers &z){ return z.imPart; }

complexNumbers complexNumbers::complex_conjugate() {
    complexNumbers x;
    x.realPart = realPart;
    x.imPart = -imPart;
    return x;
    //or simply return complexNumbers x(realPart, -imPart). This is because we have written such a constructor already.
}

void complexNumbers::set_conjugate() {
    imPart = -imPart;
}

void complexNumbers::allocate(double **&M, int n_rows, int n_cols) {
    M = new double *[n_rows];
    for(int i=0;i<n_rows;i++){
        M[i] = new double [n_cols];
    }
}

void complexNumbers::deallocate(double **&M, int n_rows, int n_cols) {
    for(int i=0;i<n_rows; i++){
        delete [] M[i];
    }
    delete[] M;
}