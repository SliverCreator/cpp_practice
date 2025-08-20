//
// Created by 14412 on 2025/8/20.
//
/* 编写模板函数maxn( )，它将由一个T类型元素组成的数组和一
个表示数组元素数目的整数作为参数，并返回数组中最大的元素。在程
序对它进行测试，该程序使用一个包含6个int元素的数组和一个包含4个
double元素的数组来调用该函数。程序还包含一个具体化，它将char指
针数组和数组中的指针数量作为参数，并返回最长的字符串的地址。如
果有多个这样的字符串，则返回其中第一个字符串的地址。使用由5个
字符串指针组成的数组来测试该具体化。*/

#include <cstring>
#include <iostream>
using namespace std;

template<typename T>
T maxn(T *arr, const int n);
template<> char *maxn(char *arr[], const int n);

int main() {
    int array[6] = {1, 2, 3, 4, 5, 6};
    double array2[4] = {1.1, 2.2, 3.3, 4.4};
    cout << maxn(array, 6) << endl;
    cout << maxn(array2, 4) << endl;
    //初始化多个字符串
    char *str1 = "Hello";
    char *str2 = "World";
    char *str3 = "C++";
    char *str4 = "Programming";
    char *str5 = "Templates";
    // 将字符串地址存入char指针数组
    char *strArr[5] = {str1, str2, str3, str4, str5};
    cout << maxn(strArr, 5) << endl;
    return 0;
}

template<typename T>
T maxn(T *arr, const int n) {
    T maxValue = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

template<>
char *maxn(char *arr[], const int n) {
    char *maxString = arr[0];
    for (int i = 1; i < n; ++i) {
        if (strlen(arr[i]) > strlen(maxString)) {
            maxString = arr[i];
        }
    }
    return maxString;
}