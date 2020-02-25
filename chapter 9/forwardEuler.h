//
// Created by Goutham Gopalakrishna on 11/11/19.
//

#ifndef WORK_FORWARDEULER_H
#define WORK_FORWARDEULER_H

#include <cmath>
#include "abstractODESolver.h"

class forwardEuler:public abstractODESolver{
public:
    forwardEuler();
    virtual ~forwardEuler()
    virtual void solveEquation(std::ostream &stream) override ;
};

#endif //WORK_FORWARDEULER_H
