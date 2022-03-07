//
// Created by mac on 2020/4/23.
//
#include <iostream>
#include <string>

using namespace std;

class Base {

public:
    Base() {
        std::cout << "Base()" << std::endl;
    }

    virtual  ~Base() {
        std::cout << "~Base()" << std::endl;
    }

};

class Derived1 : public Base {
private:
    string *name_;
public:
    Derived1() : name_(new string("NULL")) {
        std::cout << "Derived1()" << std::endl;

    }

    Derived1(const string &n) : name_(new string(n)) {
        std::cout << "Derived1(const string &n)" << std::endl;
    }

    ~Derived1() {
        if (name_) {
            delete name_;
        }
        std::cout << "~Derived1()" << std::endl;
    }

};


class Derived2 : public Base {

private:
    string *name_;
public:
    Derived2() : name_(new string("NULL")) {
        std::cout << "Derived2()" << std::endl;

    }

    Derived2(const string &n) : name_(new string(n)) {
        std::cout << "Derived2(const string &n)" << std::endl;
    }

    ~Derived2() {
        if (name_) {
            delete name_;
        }
        std::cout << "~Derived2()" << std::endl;
    }

};


int main() {
    std::cout << "c++多态: Hello, World!" << std::endl;

//    Derived1 *d1 = new Derived1();
//    Derived2 d2("Bob");
//    delete d1;

    Base *d3 = new Derived1();
    delete d3;
    return 0;

}
