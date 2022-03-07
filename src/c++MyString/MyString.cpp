//
// Created by mac on 2020/4/27.
//

#include "MyString.hpp"
#include <cstring>

MyString::MyString() : _data(nullptr), _length(0) {}

MyString::MyString(const char *s) {
    if (s == nullptr) {
        _length = 0;
        _data = new char[_length + 1]();
        std::fill_n(_data, _length + 1, 0);
        _data[0] = '\0';
    } else {
        _length = strlen(s);
        _data = new char[_length + 1]();
        std::fill_n(_data, _length + 1, 0);

        strcpy(_data, s);
    }

}

MyString::MyString(const std::string &str) {

    _length = str.size();
    _data = new char[_length + 1]();
    std::fill_n(_data, _length + 1, 0);

    strcpy(_data, str.c_str());
}

MyString::MyString(const MyString &myString) {

    if (this != &myString) {

        free();

        _length = myString.getLength();
        _data = new char[_length + 1]();
        std::fill_n(_data, _length + 1, 0);
        strcpy(_data, myString.get_cStr());
    }

}

const char *MyString::get_cStr() const {
    return _data;
}

size_t MyString::getLength() const {
    return _length;
}

MyString &MyString::operator=(const MyString &myString) {
    if (this == &myString) {
        return *this;
    } else {

        free();

        _length = myString.getLength();
        _data = new char[_length + 1]();
        std::fill_n(_data, _length + 1, 0);

        strcpy(_data, myString.get_cStr());
        return *this;
    }
}


void MyString::free() {

    if (_data) {
        delete[] _data;
        _length = 0;
    }
}

MyString::~MyString() {
    free();
    _length = 0;
}

//友元函数输出
std::ostream &operator<<(std::ostream &os, const MyString &myString) {
    os << "data:" << myString._data << " length:" << myString._length;
    return os;
}

//友元输入函数
std::istream &operator>>(std::istream &is, MyString &myString) {

    const int MAXStreamLength = 1024;
    //构造缓冲区
    char tmpbuffer[MAXStreamLength] = {'\0'};
    //读取一行缓冲区最多 MAXStreamLength-1
    is.get(tmpbuffer, MAXStreamLength, '\n');

    myString._length = strnlen(tmpbuffer, MAXStreamLength - 1);
    myString._data = new char[myString._length + 1]();
    std::fill_n(myString._data, myString._length + 1, 0);

    strncpy(myString._data, tmpbuffer, myString._length);
    return is;
}
