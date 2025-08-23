//
// Created by 14412 on 25-8-23.
//
/* 包含一个让用户输入的循环，并使用输入的数据来填充一个由golf结构组成的数组，
 * 数组被填满或用户将高尔夫选手的姓名设置为空字符串时，循环将结束。
main( )函数只使用头文件中原型化的函数来访问golf结构 */

#include "golf.h"
#include <iostream>
using namespace std;

int main() {
    golf golfer[4];
    int i = 0;
    while (i < 4) {
        if (set_golf(golfer[i]) == 0) {
            break;
        }
        int input = 0;
        cout << "请输入handicap:";
        cin >> input;
        cin.get();
        handicap(golfer[i], input);
        i++;
    }
    for (int j = 0; j < i; j++) {
        show_golf(golfer[j]);
    }
    return 0;
}