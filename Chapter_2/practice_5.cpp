//
// Created by 14412 on 25-8-7.
//
#include <iostream>
using namespace std;
float temp_convert(float temp_c);

int main() {
    system("chcp 65001");
    cout << "请输入温度（摄氏度）：" << endl;
    float temp_c;
    cin >> temp_c;
    cout << "转换后的华氏度为：" << temp_convert(temp_c) << endl;
    return 0;
}

float temp_convert(float temp_c) {
    float temp_f = temp_c * 1.8 + 32;
    return temp_f;
}