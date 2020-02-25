//
// Created by Goutham Gopalakrishna on 07/10/19.
//

#include <iostream>
#include <fstream>
#include <cassert>

int main(int argc, char *argv[]){
    double x[2][2] = {{1,2},{3,4}};
    double y[3];

    std::ofstream write_output("output.txt");
    assert(write_output.is_open());
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            write_output.precision(3);
            write_output << x[i][j] << "\n";
            std::cout << x[i][j] << "\n";
        }
    }
    write_output.close();

    /*
    std::ifstream read_file("output.txt");
    assert(read_file.is_open());
    for(int i=0;i<4;i++){
        read_file >> x[i];
    }
    read_file.close();

    //for some reason ifstream does not work!
    std::cout << "The value of x is: \n ";
    for(int i=0;i<4;i++){
        std::cout << x[i] << "\n";
    }
     */

    std::ofstream write_file("outputFormatted.txt");
    assert(write_file.is_open());
    write_file.setf(std::ios::scientific);
    write_file.setf(std::ios::showpos);
    write_file.precision(13);

    double xx = 3.5, yy=0.000085,  z= 984.5;
    write_file << xx << "\n" << yy << "\n" << z;
    write_file.close();

    return 0;



}