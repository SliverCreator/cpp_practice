//
// Created by 14412 on 25-8-11.
//
/*
编写一个要求用户输入两个整数的程序。该程序将计算并输出
这两个整数之间（包括这两个整数）所有整数的和。这里假设先输入较
小的整数。例如，如果用户输入的是2和9，则程序将指出2～9之间所有
整数的和为44
*/
#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");
    //先输入较小的数
    cout << "请输入一个较小的整数：";
    int small_int;
    cin >> small_int;
    //输入一个比之前大的整数
    cout << "请输入比之前大的整数：";
    int big_int;
    cin >> big_int;
    //循环相加
    int sum = 0;
    for (int i = small_int; i <= big_int; i++) {
        sum += i;
    }
    cout << "结果为：" << sum << endl;
    return 0;
}