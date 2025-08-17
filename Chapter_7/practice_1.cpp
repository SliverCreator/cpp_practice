//
// Created by 14412 on 25-8-17.
//
/*编写一个程序，不断要求用户输入两个数，直到其中的一个为
0。对于每两个数，程序将使用一个函数来计算它们的调和平均数，并
将结果返回给main( )，而后者将报告结果。调和平均数指的是倒数平均
值的倒数，计算公式如下：
调和平均数=2.0 * x * y / (x + y)*/

#include <iostream>
using namespace std;
double average(double x, double y);

int main() {
    system("chcp 65001");
    double x, y;
    cout << "请输入两个数";
    while (cin >> x >> y) {
        if (x == 0 || y == 0) {
            cout << "输入为0，程序结束" << endl;
            return 0;
        }else {
            cout << "调和平均值为：" << average(x, y) << endl;
            cout << "请再次输入两个数：";
        }
    }
}

double average(double x, double y) {
    return 2 * x * y/(x + y);
}