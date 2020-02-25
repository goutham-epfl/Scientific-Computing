//
// Created by Goutham Gopalakrishna on 11/11/19.
//

#ifndef WORK_PHDSTUDENTS_H
#define WORK_PHDSTUDENTS_H

#include "graduateStudents.h"
#include <string>

class phdStudents: public graduateStudents{
public:
    double x, y;
    phdStudents(const std::string &name, const bool fullTime_ = true);
    virtual double moneyOwed() const;
};

#endif //WORK_PHDSTUDENTS_H
