//
// Created by mac on 2020/4/27.
//

#include "Complex.hpp"

Complex::Complex() : _r(0.0), _i(0.0) {

}

Complex::Complex(double r, double i) : _r(r), _i(i) {

}

Complex::Complex(const Complex &c) {
    this->_i = c._i;
    this->_r = c._r;
}

//Complex Complex::operator+(const Complex c2) {
//    Complex tc;
//    tc._r = this->_r + c2._r;
//    tc._i = this->_i + c2._i;
//    return tc;
//}

Complex operator+(const Complex &c1, const Complex &c2) {
    Complex tc;
    tc._r = c1._r + c2._r;
    tc._i = c1._i + c2._i;
    return tc;
}