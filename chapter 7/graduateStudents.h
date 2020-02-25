//
// Created by Goutham Gopalakrishna on 11/11/19.
//

#ifndef WORK_GRADUATESTUDENTS_H
#define WORK_GRADUATESTUDENTS_H

#include <string>
#include "students.h"

class graduateStudents: public students{
    bool fullTime;
public:
    graduateStudents();
    graduateStudents(const std::string &name_, const double fines_=0.0, const bool fullTime_ = true);
    virtual double moneyOwed() const override;
};

#endif //WORK_GRADUATESTUDENTS_H
