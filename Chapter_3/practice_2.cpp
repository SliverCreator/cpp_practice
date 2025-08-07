//
// Created by 14412 on 2025/8/7.
//
#include <iostream>
using namespace std;
//定义常量英尺转英寸
const int Convert_in = 12;
//定义常量英寸转米
const double Convert_m = 0.0254;
//定义常量磅转千克
const double Convert_kg = 0.45359237;
double BMI(double weight_kg, double height_m);

int main() {
    //输入身高：几英尺几英寸
    int feet, inch;
    cout << "Enter your height in feet and inches (e.g., 5 11): ";
    cin >> feet >> inch;
    //计算身高转换为米
    double height_m = (feet * Convert_in + inch) * Convert_m;
    //输入体重：几磅
    double weight_lb;
    cout << "Enter your weight in pounds: ";
    cin >> weight_lb;
    //计算体重转换为千克
    double weight_kg = weight_lb * Convert_kg;
    //计算BMI
    double bmi = BMI(weight_kg, height_m);
    //输出结果
    cout << "Your BMI is: " << bmi << endl;
    return 0;
}

double BMI(double weight_kg, double height_m) {
    //计算BMI
    return weight_kg / (height_m * height_m);
}