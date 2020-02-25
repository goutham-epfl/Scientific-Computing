//
// Created by Goutham Gopalakrishna on 11/11/19.
//

#include <string>
#include <iostream>
#include "graduateStudents.h"

graduateStudents::graduateStudents() {
    fullTime = true;
}

graduateStudents::graduateStudents(const std::string &name_, const double fines_, const bool fullTime_): students(name_, fines_), fullTime(fullTime_) {}

double graduateStudents::moneyOwed() const {
return getFines(); //return fines will result in compile error because fines is private property of mother class.
}

