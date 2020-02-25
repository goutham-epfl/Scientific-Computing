//
// Created by gopalakr@INTRANET.EPFL.CH on 28.10.19.
//

#ifndef WORK_EXAMPLECLASS_H
#define WORK_EXAMPLECLASS_H


class exampleClass{

public:
    double memberVar1;
    double memberVar2;

public:
    exampleClass(double memberVar1, double memberVar2);
    double getMinimum() const;
    double getMaximum1(double memberVar1, double memberVar2);
    double getMaximum2(const exampleClass &egClass);


    double getMaximum2(exampleClass &egClass);
};

#endif //WORK_EXAMPLECLASS_H
