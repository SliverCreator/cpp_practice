//
// Created by 14412 on 2025/8/7.
//
#include <iostream>
using namespace std;
double percent(double a, double b);

int main() {
    system("chcp 65001"); // 设置控制台编码为UTF-8
    //以long long储存全球人口和中国人口
    long long world_population, china_population;
    cout << "请输入全球人口：";
    cin >> world_population;
    cout << "请输入中国人口：";
    cin >> china_population;
    //计算中国人口占全球人口的百分比
    double percentage = percent(china_population, world_population);
    //输出结果
    cout << "中国人口占全球人口的百分比为：" << percentage << "%" << endl;
    return 0;
}

double percent(double a, double b) {
    if (b == 0) {
        return 0; // Avoid division by zero
    }
    return (a / b) * 100;
}