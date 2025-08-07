//
// Created by 14412 on 2025/8/7.
//
#include <iostream>
using namespace std;
//定义常量每天的小时数
const int HOURS_PER_DAY = 24;
//定义常量每小时的分钟数
const int MINUTES_PER_HOUR = 60;
//定义常量每分钟的秒数
const int SECONDS_PER_MINUTE = 60;

int main() {
    system("chcp 65001"); //设置控制台编码为UTF-8
    //输入总秒数
    long total_seconds;
    cout << "请输入总秒数: ";
    cin >> total_seconds;
    //输出总秒数对应的天、小时、分钟和秒
    long days = total_seconds / (HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
    long hours = (total_seconds % (HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE)) / (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
    long minutes = (total_seconds % (MINUTES_PER_HOUR * SECONDS_PER_MINUTE)) / SECONDS_PER_MINUTE;
    long seconds = total_seconds % SECONDS_PER_MINUTE;
    cout << total_seconds << "秒对应的时间为: "
         << days << "天 "
         << hours << "小时 "
         << minutes << "分钟 "
         << seconds << "秒" << endl;
    return 0;
}