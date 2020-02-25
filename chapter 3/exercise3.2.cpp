//
// Created by Goutham Gopalakrishna on 07/10/19.
//

//need to understand this exercise.

#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
    std::ifstream read_file("x_and_y.txt");
    if(!read_file.is_open()){
        return 1;
    }
    int number_of_rows = 0;
    while(!read_file.eof()){
        double dummy1, dummy2, dummy3, dummy4;
        read_file >> dummy1 >> dummy2;
        read_file >> dummy3 >> dummy4;
        number_of_rows++;
    }
    std::cout << "number of rows: \t" << number_of_rows << "\n";
    read_file.close();



    return 0;
    }