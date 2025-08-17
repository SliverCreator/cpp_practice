//
// Created by 14412 on 25-8-17.
//
/*定义一个递归函数，接受一个整数参数，并返回该参数的阶
乘。前面讲过，3的阶乘写作3!，等于3*2!，依此类推；而0!被定义为
1。通用的计算公式是，如果n大于零，则n!=n*（n−1）!。在程序中对
该函数进行测试，程序使用循环让用户输入不同的值，程序将报告这些
值的阶乘*/

#include <iostream>
using namespace std;

long factorial(int n);
int main() {
    system("chcp 65001");
    int n;
    cout << "输入要计算的阶乘：";
    cin >> n;
    cout << "计算结果为：" << factorial(n) << endl;
    return 0;
}

long factorial(int n) {
    if (n == 0) {
        return 1;
    }else {
        return n * factorial(n - 1);
    }
}