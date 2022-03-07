//
// Created by mac on 2020/4/23.
//
#include <iostream>
#include <string>

using namespace std;

class A {
private:
    std::string *name = nullptr;
public:
    void f() {

        std::cout << "A f() non const" << endl;
    }

    void f() const {
        std::cout << "A f() const" << endl;
    }

    void setName(const string &name) {
        if (this->name) {
            delete this->name;
            this->name = nullptr;
        }
        this->name = new string(name);
    }

    const string &getName() const {

        return *(this->name);
    }


};

int main() {
    std::cout << "c++ CONST: Hello, World!" << std::endl;

    A a;
    a.f();

    std::cout << "******************2" << std::endl;

    const A &b = a;
    b.f();

    std::cout << "******************3" << std::endl;

    const A *c = &a;
    c->f();

    std::cout << "******************4" << std::endl;

    A *const d = &a;
    d->f();

    std::cout << "******************5" << std::endl;

    A *e = new A();
    e->setName("hello xiaowu");
    std::cout << e->getName() << std::endl;


}
