//
// Created by Goutham Gopalakrishna on 10/11/19.
//

#ifndef WORK_ABSTRACTODESOLVER_H
#define WORK_ABSTRACTODESOLVER_H
class abstractODESolver{
    double initialTime;
    double finalTime;
    double initialValue;
    double stepSize;
    double (*f_rhs)(double y, double t); //this is a function pointer taking two arguments
public:
    abstractODESolver();
    virtual ~abstractODESolver();
    void setStepSize(const double h);
    void setTimeInterval(const double t0, const double t1);
    void setInitialValue(const double y0);
    void setRHS(double (*f) (double y, double t));
    double rightHandSize(double y, double t) =0;
    virtual void solveEquation(std::ostream &stream) =0 ;

    double getFinalTime() const{ return finalTime;}
    double getInitialTime() const {return initialTime;}
    double getInitialValue() const {return initialValue;}
    double getStepSize() const {return stepSize;}
};

#endif //WORK_ABSTRACTODESOLVER_H
