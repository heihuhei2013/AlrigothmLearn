//
// Created by mac on 2020/4/23.
//
#include <iostream>
#include <string>

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include "MyString.hpp"

using namespace std;


int main() {

    std::cout << "c++ MyString: Hello, World!" << std::endl;


    MyString str("abcdef");
    MyString str2 = str;

    std::cout << "MyString:" << std::endl;
    std::cout << str << std::endl;
    std::cout << str2 << std::endl;


    MyString str3;
    std::cin >> str3;
    std::cout << "str3:" << str3 << std::endl;

    std::cout << "c++ MyString: end!" << std::endl;

}
