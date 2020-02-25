//
// Created by gopalakr@INTRANET.EPFL.CH on 28.10.19.
//

#include<iostream>
#include "exampleClass.h"

exampleClass::exampleClass(double member1, double member2) {
    memberVar1 = member1;
    memberVar2 = member2;
}

double exampleClass::getMinimum() const {
    if(memberVar1<memberVar2){
        return memberVar1;
    }
    else{
        return memberVar2;
    }
}

double exampleClass::getMaximum2(exampleClass& egClass){
    if(egClass.memberVar1 > egClass.memberVar2){
        return egClass.memberVar1;
    }
    else{
        return egClass.memberVar2;
    }

}

