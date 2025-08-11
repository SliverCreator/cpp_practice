//
// Created by 14412 on 25-8-11.
//
// 编写一个要求用户输入数字的程序。每次输入后，程序都将报
// 告到目前为止，所有输入的累计和。当用户输入0时，程序结束

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int number;
    system("chcp 65001");
    cout << "请输入要累加的数字，输入0结束";
    while (cin >> number && number != 0) {
        sum += number;
        cout << "sum = " << sum << endl;
    }
    return 0;
}