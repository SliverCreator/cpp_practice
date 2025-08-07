//
// Created by 14412 on 2025/8/7.
//
#include <iostream>
using namespace std;
//地理纬度转换，度转分
const int Convert_m = 60;
//地理经度转换，分转秒
const int Convert_s = 60;

int main() {
    system("chcp 65001");
    //输入纬度
    double degrees, minutes, seconds;
    cout << "请输入纬度（度 分 秒）：";
    cin >> degrees >> minutes >> seconds;
    //转换为度
    double latitude = degrees + minutes / Convert_m + seconds / Convert_m / Convert_s;
    //输出结果
    cout << "转换后的纬度为：" << latitude << "度" << endl;
    return 0;
}