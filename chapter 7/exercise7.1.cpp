//
// Created by Goutham Gopalakrishna on 10/11/19.
//

#include <iostream>
#include <cmath>
#include "students.cpp"
#include "graduateStudents.cpp"
#include "phdStudents.cpp"

int main(int argc, char*argv[]){

    graduateStudents uk;
    std::cout << uk.name <<std::endl;

    graduateStudents gg("gg");
    std::cout <<gg.name <<gg.getFines() << std::endl;
}
