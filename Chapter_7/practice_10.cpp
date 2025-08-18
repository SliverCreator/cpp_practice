//
// Created by 14412 on 2025/8/18.
//
/*设计一个名为calculate( )的函数，它接受两个double值和一个指
向函数的指针，而被指向的函数接受两个double参数，并返回一个
double值。calculate( )函数的类型也是double，并返回被指向的函数使用
calculate( )的两个double参数计算得到的值。*/

/*请编写一个程序，它调用上述两个函数和至少另一个与add( )类似
的函数。该程序使用循环来让用户成对地输入数字。对于每对数字，程
序都使用calculate( )来调用add( )和至少一个其他的函数。如果读者爱冒
险，可以尝试创建一个指针数组，其中的指针指向add( )样式的函数，
并编写一个循环，使用这些指针连续让calculate( )调用这些函数。*/

#include <iostream>
using namespace std;

double calculate(double x, double y, double (*func)(double, double));
double add(double x, double y);
double subtract(double x, double y);

int main() {
    double (*pf[2])(double, double) = {add, subtract};
    double x, y;
    while (cin >> x >> y) {
        //在指针数组里循环调用到calculate
        for (auto & i : pf) {
            cout << calculate(x, y, i) << endl;
        }
    }
    return 0;
}

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double calculate(double x, double y, double (*func)(double, double)) {
    return func(x, y);
}