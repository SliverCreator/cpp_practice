//
// Created by 14412 on 2025/8/7.
//
#include <iostream>
using namespace std;
double calculateFuelConsumption(double distance, double fuel);

int main() {
    system("chcp 65001"); // 设置控制台编码为UTF-8
    //输入行驶里程（公里）和耗油量（升）
    double distance, fuel;
    cout << "请输入行驶里程（公里）: ";
    cin >> distance;
    cout << "请输入耗油量（升）: ";
    cin >> fuel;
    // 输出百公里耗油量
    cout << "百公里耗油量为: " << calculateFuelConsumption(distance, fuel) << " 升" << endl;
    return 0;
}

// 计算百公里耗油量
double calculateFuelConsumption(double distance, double fuel) {
    if (distance <= 0 || fuel < 0) {
        throw invalid_argument("Distance must be positive and fuel cannot be negative.");
    }
    return (fuel / distance) * 100; // 百公里耗油量
}