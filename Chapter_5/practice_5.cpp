//
// Created by 14412 on 25-8-11.
//
/*
*假设要销售《C++ For Fools》一书。请编写一个程序，输入全
年中每个月的销售量（图书数量，而不是销售额）。程序通过循环，使
用初始化为月份字符串的char *数组（或string对象数组）逐月进行提
示，并将输入的数据储存在一个int数组中。然后，程序计算数组中各元
素的总数，并报告这一年的销售情况。*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    system("chcp 65001");
    //初始化月份string数组
    //初始化对应月份销售数量数组
    int sales[12];
    int total_sales = 0;
    //逐月输入储存入数组并进行累加
    for (int i = 0; i < 12; i++) {
        const string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        cout << "请输入" << months[i] << "的销售数量" << endl;
        cin >> sales[i];
        total_sales += sales[i];
    }
    cout << "销售总数为" << total_sales << endl;
    return 0;
}