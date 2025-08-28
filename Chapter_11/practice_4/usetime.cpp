//
// Created by 14412 on 2025/8/28.
//

#include <iostream>
#include "mytime.h"
using std::cout;
using std::endl;

int main() {
    Time aida(3,35);
    Time tosca(2,48);
    Time temp;

    cout << "Aida and Tosca: " << endl;
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;
    cout << "Aida + Tosca: " << temp << endl;
    temp = 1.17 * aida;
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
    return 0;
}