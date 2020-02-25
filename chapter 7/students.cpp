//
// Created by Goutham Gopalakrishna on 11/11/19.
//

#include "students.h"
#include <iostream>
#include <string>

students::students() {
    name = "unkonwn";
    fees = 0.0;
    fines=0.0;
}

students::students(const std::string &name_) {
    name = name_;
    fees = 0.0;
    fines= 0.0;
}

students::students(const std::string &name_, const double &fees_): name(name_), fees(fees_), fines(0.0) {}

students::students(const std::string &name_, const double &fines_, const double &fees_): name(name_), fines(fines_), fees(fees_) {}

void students::setFines(const double a) {
    if(fines>0){
        fines = a;
    }else{
        std::cout << "Must be positive" << std::endl;
        fines = 0.0;
    }
}

double students::moneyOwed() const {
    return fines + fees;
}

double students::getFines() const {
    return fines;
}