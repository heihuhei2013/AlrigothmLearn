//
// Created by mac on 2020/4/29.
//

#include "Person.hpp"
#include <iostream>

Person::Person() {

    std::cout << this << " " << "Person::Person()" << std::endl;
}

Person::Person(const Person &p) {

    std::cout << this << " " << "Person::Person(const Person &p)" << std::endl;

}

Person &Person::operator=(const Person &p) {

    if (this == &p) {
        return *this;
    } else {
        return *this;
    }
}

Person::~Person() {

    std::cout << this << " " << "Person::~Person() " << std::endl;

}