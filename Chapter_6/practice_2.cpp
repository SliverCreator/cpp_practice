//
// Created by 14412 on 25-8-13.
//
/*
编写一个程序，最多将10个donation值读入到一个double数组中
（如果您愿意，也可使用模板类array）。程序遇到非数字输入时将结束
输入，并报告这些数字的平均值以及数组中有多少个数字大于平均值*/

#include <iostream>
#include <array>
#include <cctype>
using namespace std;

int main() {
    system("chcp 65001");
    array<double, 10> donation{};
    double average = 0;
    int count = 0;
    double sum = 0;
    //循环向donation中输入
    for (int i = 0; i < 10; i++) {
        if (cin >> donation[i]) {
            sum += donation[i];
            average = sum / (i + 1);
        } else {
            break;
        }
    }
    //查找donation有多少个数字元素大于平均值
    for (int i = 0; i < 10; i++) {
        if (donation[i] > average) {
            count++;
        }
    }
    //输出有平均值和大于平均值的个数
    cout << "平均值" << average << "大于平均值的个数" << count << endl;
    return 0;
}

