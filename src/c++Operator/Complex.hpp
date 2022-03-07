//
// Created by mac on 2020/4/27.
//

#ifndef C_COMPLEX_HPP
#define C_COMPLEX_HPP


class Complex {

private:
    double _r;
    double _i;

public:

    Complex();
    Complex(double r,double i);
    Complex(const Complex &c);

//    Complex operator+(const Complex c2);

    friend Complex operator+(const Complex &c1, const Complex &c2);

};



#endif //C_COMPLEX_HPP
