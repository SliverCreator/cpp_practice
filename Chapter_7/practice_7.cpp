//
// Created by 14412 on 25-8-18.
//
/* 修改程序清单7.7中的3个数组处理函数，使之使用两个指针参
数来表示区间。fill_array( )函数不返回实际读取了多少个数字，而是返
回一个指针，该指针指向最后被填充的位置；其他的函数可以将该指针
作为第二个参数，以标识数据结尾*/

#include <iostream>
using namespace std;

// 定义数组最大长度
const int MAX = 5;

// 函数原型声明
// 填充数组：接收数组和限制大小，返回实际填充的元素个数
double *fill_array(double ar[], int limit);
// 显示数组：接收数组和元素个数，显示所有元素
void show_array(const double ar[], const double *last_position);
// 重新计算数组值：接收倍率因子、数组和元素个数，修改数组中的所有值
void revalue(double r, double ar[], double *last_position);

int main() {
    // 设置控制台字符编码为UTF-8
    system("chcp 65001");
    
    // 声明一个double类型数组
    double properties[MAX];
    // 填充数组并获取实际填充的元素个数
    double *last_position = fill_array(properties, MAX);
    
    // 显示填充后的数组
    show_array(properties, last_position);
    
    // 如果数组非空，则进行重新计算
    if (last_position >= properties) {
        cout << "Enter revaluation factor:";
        double factor;
        // 循环直到获取有效的重新计算因子
        while (!(cin >> factor)) {
            cin.clear();  // 清除输入错误标志
            while (cin.get() != '\n')  // 清空输入缓冲区
                continue;
            cout << "Bad input. Try again.";
        }
        // 使用输入的因子重新计算数组值
        revalue(factor, properties, last_position);
        // 显示重新计算后的数组
        show_array(properties, last_position);
    }
    
    cout << "Done." << endl;
    // 等待用户按两次回车键后退出
    cin.get();
    cin.get();
    return 0;
}

// 填充数组函数实现
double *fill_array(double ar[], int limit) {
    double temp;
    int i;
    // 循环读取用户输入，直到达到限制或遇到无效输入
    for (i = 0; i < limit; i++) {
        cout << "Enter value " << i + 1 << ":";
        cin >> temp;
        if (!cin) {
            // 输入无效
            cin.clear(); // 清除错误标志
            while (cin.get() != '\n') // 清空输入缓冲区
                continue;
            cout << "Bad input. input process terminated." << endl;
            break;
        } else if (temp < 0) {
            // 输入负数，终止输入
            break;
        }
        ar[i] = temp; // 将有效输入存储到数组中
    }
    return &ar[i - 1]; // 返回最后填充位置的指针
}

// 显示数组函数实现
void show_array(const double ar[], const double *last_position) {
    // 遍历数组并显示每个元素
    const double *ptr = ar;
    int i = 1;
    while (ptr <= last_position) {
        cout << "Property " << i << ": " << *ptr << endl;
        ptr++;
        i++;
    }
}

// 重新计算数组值函数实现
void revalue(double r, double ar[], double *last_position) {
    // 遍历数组，将每个元素乘以给定的因子
    double *ptr = ar;
    while (ptr <= last_position) {
        *ptr *= r;
        ptr++;
    }
}