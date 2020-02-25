//
// Created by Goutham Gopalakrishna on 10/11/19.
//

#ifndef WORK_STUDENTS_H
#define WORK_STUDENTS_H

#include <iostream>
#include <string>

class students{
    double fines;
    std::string name;
    double fees;
public:
    students();
    students(const std::string &name_);
    students(const std::string &name_, const double &fines_);
    students(const std::string &name_, const double &fines_, const double &fees_);
    void setFines(const double a);
    double getFines() const;
    double virtual moneyOwed() const;

};
#endif //WORK_STUDENTS_H
