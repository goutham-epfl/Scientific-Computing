//
// Created by Goutham Gopalakrishna on 15/11/19.
//

#ifndef WORK_POINT2D_H
#define WORK_POINT2D_H

#include <iostream>

class point2d{
public:
    int x,y;
    point2d(int a, int b);
    bool operator<(const point2d& other) const;
};
#endif //WORK_POINT2D_H
