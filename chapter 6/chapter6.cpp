//
// Created by Goutham Gopalakrishna on 25/10/19.
//

#include <iostream>
#include <cassert>
#include "Book.cpp"
#include "exampleClass.cpp"
#include "complexNumbers.cpp"

int main(int argc, char *argv[]){

    Book good_read;
    good_read.author = "Author of other book";
    good_read.price = 5555;
    Book another_book(good_read);
    good_read.setPublicationYear(1988);
    std::cout << good_read.getPublicaitonYear() <<std::endl;

    Book book;
    book.author = "GG";
    book.setPublicationYear(2000);
    std::cout << book.getPublicaitonYear() << std::endl << book.author << std::endl;
    std::cout << book.price << std::endl;

    exampleClass egClass(5.0, 10.0);
    std::cout << "The maximum value is:" << egClass.getMaximum2(egClass) << std::endl;
    std::cout << "The minimum value is:" << egClass.getMinimum() << std::endl;

    //using complexNumbers class
    complexNumbers z1(4.0, 3.0);
    std::cout << "The modulus is: " << z1.calculateModulus() << std::endl;
    std::cout << "The argument is: " << z1.calculateArgument() << std::endl;

    complexNumbers z2;
    z2 = z1.calculatePower(3.0);
    std::cout << z2;


    complexNumbers z3;
    z3 = z1 + z2;
    std::cout << "The value of z3 is: " << z3 << std::endl;


    complexNumbers z5;
    std::cout << "The real part of z5 is" << z5.getRealPart() << std::endl;

    complexNumbers z6(const complexNumbers &z4); //what is the point of this copy constructor? Also, don't understand the syntax in complexNumbers.cpp file
    std::cout << "The complex number is: " << z1 << std::endl;
    std::cout << "The complex conjugate is: " << z1.complex_conjugate() << std::endl;
    z1.set_conjugate();
    std::cout << "The complex conjugate set is" << z1.getImPart()  << std::endl;

}

