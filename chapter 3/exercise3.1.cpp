//
// Created by Goutham Gopalakrishna on 07/10/19.
//

#include <iostream>
#include <fstream>

int main(int argc, char *argv[]){
    double x[4] = {0,1,2,3};
    double y[4] = {6,7,8,9};
    std::ofstream write_file("x_and_y.txt");
    assert(write_file.is_open());
    write_file.precision(5);
    write_file.setf(std::ios::scientific);
    write_file.setf(std::ios::showpos);
    for(int i=0;i<4;i++){
        write_file << x[i];
        write_file.flush();
    }
    write_file << "\n";  //if you write cout then it will not show up
    for(int i=0;i<4;i++){
        write_file << y[i];
    }
    write_file.close();
    return 0;
}