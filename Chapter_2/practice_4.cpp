//
// Created by 14412 on 25-8-7.
//
#include <iostream>
using namespace std;

int main() {
    int age;
    system("chcp 65001");
    cout << "请输入年龄：" << endl;
    cin >> age;
    int age_month = age * 12;
    cout << "您的年龄包含的月份数：" << age_month << endl;
    return 0;
}