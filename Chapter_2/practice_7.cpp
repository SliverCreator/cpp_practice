//
// Created by 14412 on 25-8-7.
//
#include <iostream>
using namespace std;
void print_time(int hour, int minute);

int main() {
    system("chcp 65001");
    int hour, minute;
    cout << "请输入小时数：" << endl;
    cin >> hour;
    cout << "请输入分钟数：" << endl;
    cin >> minute;
    print_time(hour, minute);
    return 0;
}

void print_time(int hour, int minute) {
    cout << "当前时间：" << hour << ":" << minute << endl;
}