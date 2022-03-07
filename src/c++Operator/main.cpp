//
// Created by mac on 2020/4/23.
//
#include <iostream>
#include <string>

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>

#include "Complex.hpp"

using namespace std;


int main() {

    std::cout << "c++ Operator: Hello, World!" << std::endl;

    Complex c1(2,4);
    Complex c2(4,5);

    Complex c3 = c1 + c2;

    std::cout << "c++ Operator: end!" << std::endl;

}
