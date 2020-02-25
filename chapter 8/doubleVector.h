//
// Created by Goutham Gopalakrishna on 15/11/19.
//

#ifndef WORK_DOUBLEVECTOR_H
#define WORK_DOUBLEVECTOR_H

#include <cassert>

template<unsigned int DIM> class doubleVector{
private:
    double mData[DIM];
public:
    double& operator[](int index){
        assert(index<DIM);
        assert(index>-1);
        return mData[index];
    }

};


#endif //WORK_DOUBLEVECTOR_H
