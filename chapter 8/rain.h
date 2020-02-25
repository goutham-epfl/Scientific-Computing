//
// Created by Goutham Gopalakrishna on 15/11/19.
//

#ifndef WORK_RAIN_H
#define WORK_RAIN_H

#include <cassert>

template<unsigned int DIM>
class rain{
private:
    double mData[DIM];
public:
    double operator[](const int index){
        assert(index < DIM);
        assert(index > -1);
        return mData[index];
    }
    double operator()(const int index) const{
        assert(index < DIM);
        assert(index > -1);
        if(mData[index]>=0.0 && mData[index]<1.0){return mData[index];}
        else if(mData[index]>-10e-6 && mData[index] < 0){return 0;}
        else if(mData[index]<1+10e-6 && mData[index] > 1){return 1;}
        else {assert(0);
        std::cerr << "Value out of range" << std::endl;}


    }
};

#endif //WORK_RAIN_H
