//
// Created by 14412 on 25-8-14.
//
/*
在Neutronia王国，货币单位是tvarp，收入所得税的计算方式如
下：
5000 tvarps：不收税
5001～15000 tvarps：10%
15001～35000 tvarps：15%
35000 tvarps以上：20%
例如，收入为38000 tvarps时，所得税为5000 0.00 + 10000 0.10 +
20000 0.15 + 3000 0.20，即4600 tvarps。请编写一个程序，使用循环来
要求用户输入收入，并报告所得税。当用户输入负数或非数字时，循环
将结束。
*/

#include <iostream>
using namespace std;

double get_tax(double income);

int main() {
    system("chcp 65001");
    cout << "请输入薪资：";
double income;
    cin >> income;
    while (income > 0 && cin.good()) {
        cout << "所得税为：" << get_tax(income) << endl;
        cout << "请继续输入薪资:";
        cin >> income;
    }
    return 0;
}

double get_tax(double income) {
    if (income < 5000) {
        return 0;
    }
    else if (income > 5000 && income < 15000) {
        return (income - 5000) * 0.1;
    }
    else if (income > 15000 && income < 35000) {
        return 10000 * 0.1 + (income - 15000) * 0.15;
    }
    else {
        return 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
    }
}