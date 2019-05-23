//
// Created by mac on 2019-05-16.
//

#include <iostream>
#include "Student.hpp"

#include "boost/filesystem.hpp"

using namespace boost::filesystem;

int main()
{
    std::cout << "Hello, World! Day01_boost_filesystem" << std::endl;

    std::cout << "Hello, World! boost " << file_size(path("/Users/mac/Documents/GitHub/AlgorithmLearn/boost_1_70_0/INSTALL")) << std::endl;


    Student stu;

    
    return 0;
}


