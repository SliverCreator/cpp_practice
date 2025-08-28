//
// Created by 14412 on 25-8-28.
//
#include <iostream>
using namespace std;
#include "complex0.h"

int main() {
    Complex0 a(3.0,4.0);
    Complex0 c;
    cout << "Enter a complex number:" << endl;
    while (cin >> c) {
        cout << "c is " << c << endl;
        cout << "complex conjugate is " << ~c << endl;
        cout << "a is " << a << endl;
        cout << "a + c is " << a + c << endl;
        cout << "a * c is " << a * c << endl;
        cout << "a - c is " << a - c << endl;
        cout << "2 * c is " << 2 * c << endl;
        cout << "Enter a complex number:" << endl;
    }
    cout << "Done";
    return 0;
}