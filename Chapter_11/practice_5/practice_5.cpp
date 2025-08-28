//
// StoneWt 测试小程序
//
#include <iostream>
#include "stonewt.h"

using std::cout;
using std::endl;

int main() {
    // 基本构造
    StoneWt a(285.7);                 // 以总磅构造，默认 FLOAT_POUND
    StoneWt b(21, 5.5);               // 以英石+磅构造，默认 STONE
    StoneWt c(150.0, StoneWt::INT_POUND); // 以总磅构造，整数磅模式

    // 显示三种模式
    a.set_float_pound();
    cout << "a (float pounds): " << a << endl;
    a.set_int_pound();
    cout << "a (int pounds):   " << a << endl;
    a.set_stone();
    cout << "a (stone):        " << a << endl;

    cout << "b (default stone): " << b << endl;
    c.set_float_pound();
    cout << "c (float pounds):  " << c << endl;

    // 算术运算
    StoneWt sum = a + b;
    StoneWt diff = b - a;
    StoneWt k1 = 2.5 * a;
    StoneWt k2 = b * 1.2;

    cout << "sum (a + b):   " << sum << endl;
    cout << "diff (b - a):  " << diff << endl;
    cout << "2.5 * a:       " << k1 << endl;
    cout << "b * 1.2:       " << k2 << endl;

    // 切换模式查看同一数值的不同表示
    sum.set_int_pound();
    diff.set_stone();
    cout << "sum (int pounds): " << sum << endl;
    cout << "diff (stone):     " << diff << endl;

    return 0;
}
