//
// Created by Goutham Gopalakrishna on 15/11/19.
//

#include <set>
#include <iostream>
#include "point2d.h"

point2d::point2d(int a, int b) {
    x = a;
    y = b;
}

bool point2d::operator<(const point2d &other) const {
    if(x < other.x){
        return false;
    }
    if(x > other.x){
        return true;
    }
    if(y > other.y){
        return true;
    }
    if(y<other.y){
        return false;
    }
}
