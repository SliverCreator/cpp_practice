//
// Created by 14412 on 25-8-28.
//

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
namespace VECTOR_2 {
    class Vector_2 {
        public:
        enum Mode {RECT, POL};
        private:
        double x;
        double y;
        // double mag;
        // double ang;
        Mode mode;
        public:
        Vector_2();
        Vector_2(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector_2();
        double xval() const {return x;}
        double yval() const {return y;}
        double magval() const ;
        double angval() const ;
        void polar_mode();
        void rect_mode();
        Vector_2 operator+(const Vector_2 &b) const;
        Vector_2 operator-(const Vector_2 &b) const;
        Vector_2 operator-() const;
        Vector_2 operator*(double n) const;
        friend Vector_2 operator*(double n, const Vector_2 &a);
        friend std::ostream &operator<<(std::ostream &os, const Vector_2 &v);
    };
}

#endif //VECTOR_H
