//
// Created by 14412 on 25-8-28.
//
#include <cmath>
#include "vector_2.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;
using std::endl;

namespace VECTOR_2 {
    const double Rad_to_Deg = 45.0 / atan(1.0);

    Vector_2::Vector_2() {
        x = y  = 0.0;
        mode = RECT;
    }
    Vector_2::Vector_2(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
        }
        else if (form == POL) {
            double ang = n2 / Rad_to_Deg;
            x = n1 * cos(ang);
            y = n1 * sin(ang);

        }
        else {
            cout << "Incorrect 3rd argument to Vector()";
            cout << "Vector set to 0" << endl;
            x = y = 0.0;
            mode = RECT;
        }
    }
    void Vector_2::reset(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
        }
        else if (form == POL) {
            double ang = n2 / Rad_to_Deg;
            x = n1 * cos(ang);
            y = n1 * sin(ang);

        }
        else {
            cout << "Incorrect 3rd argument to Vector()";
            cout << "Vector set to 0" << endl;
            x = y = 0.0;
            mode = RECT;
        }
    }
    Vector_2::~Vector_2()= default;
    double Vector_2::magval() const {
        return sqrt(x * x + y * y);
    }
    double Vector_2::angval() const {
        if (x == 0 && y == 0) {
            return 0.0;
        }
        else {
            return atan2(y, x);
        }
    }

    void Vector_2::polar_mode() {
        mode = POL;
    }
    void Vector_2::rect_mode() {
        mode = RECT;
    }
    Vector_2 Vector_2::operator+(const Vector_2 &b) const {
        return {x + b.x, y + b.y};
    }
    Vector_2 Vector_2::operator-(const Vector_2 &b) const {
        return {x - b.x, y - b.y};
    }
    Vector_2 Vector_2::operator-() const {
        return {-x, -y};
    }
    Vector_2 Vector_2::operator*(double n) const {
        return {x * n, y * n};
    }
    Vector_2 operator*(double n, const Vector_2 &a) {
        return a * n;
    }
    std::ostream & operator<<(std::ostream &os, const Vector_2 &v) {
        if (v.mode == Vector_2::RECT) {
            os << "(" << v.x << ", " << v.y << ")";
        }
        else if (v.mode == Vector_2::POL) {
            os << v.magval() << ", " << v.angval() * Rad_to_Deg;
        }
        else {
            os << "Vector object mode is invalid";
        }
        return os;
    }


}