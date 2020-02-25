//
// Created by Goutham Gopalakrishna on 15/11/19.
//

#include <cassert>
#include <iostream>
#include <vector>
#include <algorithm>
#include "point2d.cpp"
#include "doubleVector.h"

template<class T> T getMax(T a, T b){
    if(a>b){return a;}
    else{return b;}
}

int main(int argc, char* argv[]){
    double result = getMax(5.0, 6.0);
    std::cout << result << std::endl;

    std::vector<std::string> destinations;
    destinations.reserve(6);
    destinations.push_back("Paris");
    destinations.push_back("Chennai");
    destinations.push_back("Lausanne");
    std::cout << destinations.size() << std::endl;
    for(int i=0; i<destinations.size(); i++){
        std::cout<< destinations[i] << "\t";
    }
    std::cout << std::endl;
    std::vector<std::string>::const_iterator c;
    for(c=destinations.begin(); c!=destinations.end(); c++){
        std::cout << *c << "\t";
    }
    std::cout << std::endl;
    destinations.insert(destinations.begin(),"London");
    destinations.insert(destinations.begin()+1, "Dubai");
    destinations.erase(destinations.begin()+2,destinations.begin()+3);
    for(c=destinations.begin(); c!=destinations.end(); c++){
        std::cout << *c <<"\t";
    }
    std::cout <<std::endl;

    std::set<point2d> points;
    point2d origin(0.0, 0.0);
    points.insert(origin);
    points.insert(point2d(-2,-1));
    std::cout << points.size() << std::endl;

    doubleVector<5> v;
    v[0]=1.0;
    v[1]=1.0;

}

