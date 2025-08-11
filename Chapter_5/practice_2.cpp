//
// Created by 14412 on 25-8-11.
//
/*使用array对象（而不是数组）和long double（而不是long long）
重新编写程序清单5.4，并计算100!的值*/

#include <iostream>
#include <array>
using namespace std;

int main() {
    array <long double, 101> factorial{};
    factorial[0] = 1;
for (int i = 1; i < 101; i++) {
        factorial[i] = factorial[i - 1] * i;
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << i << "!=" << factorial[i] << endl;
    }
    return 0;
}
