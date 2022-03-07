//
// Created by mac on 2020/4/27.
//

#ifndef C_MYSTRING_HPP
#define C_MYSTRING_HPP

#include <iostream>
#include <string>

class MyString {

private:
    char *_data;
    size_t _length;

    void free();

public:


    MyString(); //默认构造函数
    MyString(const char *s);//从char*构造
    MyString(const std::string &str); //从string构造
    MyString(const MyString &myString);//拷贝构造函数


    const char *get_cStr() const;
    size_t getLength() const;

    MyString &operator=(const MyString &myString);

    friend std::ostream &operator<<(std::ostream &os, const MyString &myString);

    friend std::istream &operator>>(std::istream &is, MyString &myString);

    ~MyString();//析构函数
};


#endif //C_MYSTRING_HPP
