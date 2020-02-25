//
// Created by Goutham Gopalakrishna on 17/11/19.
//

#ifndef WORK_ABSVALUE_H
#define WORK_ABSVALUE_H

#include <iostream>

template<class T> T absValue(T a){
    if(a>=0){return a;}
    else{return -a;}
}

#endif //WORK_ABSVALUE_H
