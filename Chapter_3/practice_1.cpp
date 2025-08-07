//
// Created by 14412 on 2025/8/7.
//
#include <iostream>
using namespace std;
// 定义常量转换因子从英寸到英尺
const double Convert = 0.083;

int main() {
    //输入身高（英寸）,并用下划线指示输入
    double heightInInches;
    cout << "Enter your height in inches:____";
    cin >> heightInInches;
    // 将身高转换为英尺
    double heightInFeet = heightInInches * Convert;
    // 输出身高（英尺）
    cout << "Your height in feet is: " << heightInFeet << endl;
    // 输出身高（英寸）
    cout << "Your height in inches is: " << heightInInches << endl;
    return 0;
}