//
// Created by 14412 on 25-8-28.
//

#ifndef COMPLEX0_H
#define COMPLEX0_H
#include <iosfwd>

class Complex0 {
private:
    double real;
    double imag;
public:
    Complex0();
    Complex0(double r, double i);
    Complex0 operator+(const Complex0 &c);
    Complex0 operator-(const Complex0 &c);
    Complex0 operator*(const Complex0 &c);
    friend Complex0 operator*(int n, const Complex0 &c);
    friend Complex0 operator*(const Complex0 &c, int n);
    Complex0 operator~();

    friend std::ostream &operator<<(std::ostream &os, const Complex0 &c);
    friend std::istream &operator>>(std::istream &is, Complex0 &c);
};

#endif //COMPLEX0_H
