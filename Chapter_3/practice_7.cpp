//
// Created by 14412 on 2025/8/7.
//
#include <iostream>
using namespace std;
//加仑与升转换
const double GALLON_TO_LITER = 3.875;
//公里到英里转换
const double KM_TO_MILE = 0.621371;
double convertToUS(double oil_consumption_eu);

int main() {
    system("chcp 65001"); // 设置控制台编码为UTF-8
    //输入欧式耗油量
    double oil_consumption_eu;
    cout << "请输入欧式耗油量（升/100公里）：";
    cin >> oil_consumption_eu;
    //转换为美式耗油量
    double oil_consumption_us = convertToUS(oil_consumption_eu);
    //输出美式耗油量
    cout << "美式耗油量（英里/加仑）：" << oil_consumption_us << endl;
    return 0;
}

// 从欧式耗油量转换美式耗油量
double convertToUS(double oil_consumption_eu) {
    return 100 * KM_TO_MILE / (oil_consumption_eu / GALLON_TO_LITER);
}