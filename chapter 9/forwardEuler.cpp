//
// Created by Goutham Gopalakrishna on 11/11/19.
//

#include "forwardEuler.h"
#include <cmath>

forwardEuler::forwardEuler()  {}

forwardEuler::~forwardEuler() {}

void forwardEuler::solveEquation(std::ostream &stream) {
    double t_prev = getInitialTime();
    double y_prev = getInitialValue();

    int n = static_cast<int>(std::floor((getFinalTime()-getInitialTime())/getStepSize()));
    double y_next;
    double t_next;
    double h = getStepSize();
    stream << t_prev << y_prev;
    for(i=0; i<n,i++){
        t_next = t_prev + h;
        y_next = y_prev + h*rightHandSize(y_prev,t_prev);

        stream << t_next << y_next;

        y_prev = y_next;
        t_prev = t_next;
    }


}