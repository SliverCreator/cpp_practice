//
// Created by 14412 on 2025/8/20.
//
/* 编写模板函数max5( )，它将一个包含5个T类型元素的数组作为
参数，并返回数组中最大的元素（由于长度固定，因此可以在循环中使
用硬编码，而不必通过参数来传递）。在一个程序中使用该函数，将T
替换为一个包含5个int值的数组和一个包含5个double值的数组，以测试
该函数 */

#include <iostream>
using namespace std;

template <typename T>
T max5(const T (&arr)[5]);

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    double array2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << max5(array) << endl;
    cout << max5(array2) << endl;
    return 0;
}

template <typename T>
T max5(const T (&arr)[5]) {
    T maxValue = arr[0];
    for (int i = 1; i < 5; ++i) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}