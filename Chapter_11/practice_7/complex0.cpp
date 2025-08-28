//
// Created by 14412 on 25-8-28.
//
#include "complex0.h"

#include <complex>
#include <iostream>

Complex0::Complex0() {
    real = imag = 0;
}

Complex0::Complex0(double r, double i) {
    real = r;
    imag = i;
}

Complex0 Complex0::operator+(const Complex0 &c) {
    return Complex0(real + c.real, imag + c.imag);
}

Complex0 Complex0::operator-(const Complex0 &c) {
    return Complex0(real - c.real, imag - c.imag);
}

Complex0 Complex0::operator*(const Complex0 &c) {
    return Complex0(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}

Complex0 operator*(int n, const Complex0 &c) {
    return Complex0(c.real * n, c.imag * n);
}
Complex0 operator*(const Complex0 &c, int n) {
    return Complex0(c.real * n, c.imag * n);
}

Complex0 Complex0::operator~() {
    return Complex0(real, -imag); // 返回共轭复数（虚部取反）
}

std::ostream &operator<<(std::ostream &os, const Complex0 &c) {
    os << "(" << c.real << "," << c.imag << "i)";
    return os;
}

std::istream &operator>>(std::istream &is, Complex0 &c) {
    std::cout << "real: ";
    is >> c.real;
    std::cout << "imag: ";
    is >> c.imag;
    return is;
}