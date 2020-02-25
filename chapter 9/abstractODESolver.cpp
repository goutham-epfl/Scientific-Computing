//
// Created by Goutham Gopalakrishna on 11/11/19.
//

#include "abstractODESolver.h"

abstractODESolver::abstractODESolver(): initialTime(), finalTime(), initialValue(), finalTime(), stepSize() {}

abstractODESolver::~abstractODESolver() {}

void abstractODESolver::setInitialValue(const double y0): initialValue(y0) {}

void abstractODESolver::setStepSize(const double h) : stepSize(h) {}

void abstractODESolver::setTimeInterval(const double t0, const double t1) {
    initialTime = t0;
    finalTime = t1;
}

void abstractODESolver::setRHS(double (*f) (double, double)) {
    f_rhs = f;
}

double abstractODESolver::rightHandSize(double y, double t) {
    return f_rhs(y,t);
}