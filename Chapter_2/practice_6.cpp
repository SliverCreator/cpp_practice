//
// Created by 14412 on 25-8-7.
//
#include <iostream>
using namespace std;
double convert(double light_years);

int main() {
    system("chcp 65001");
    cout << "请输入光年单位：" << endl;
    double light_years;
    cin >> light_years;
    cout << "转换后的天文单位为：" << convert(light_years) << endl;
    return 0;
}

double convert(double light_years) {
    double astronomical_unit = light_years * 63240;
    return astronomical_unit;
}