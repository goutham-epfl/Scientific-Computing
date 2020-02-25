//
// Created by Goutham Gopalakrishna on 11/11/19.
//

#include "phdStudents.h"
#include <string>


phdStudents::phdStudents(const std::string &name_, const bool fullTime_): graduateStudents(name_,0.0, fullTime_) {}

double phdStudents::moneyOwed() const {
    return 0.0;
}