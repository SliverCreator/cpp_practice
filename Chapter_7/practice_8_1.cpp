//
// Created by 14412 on 2025/8/18.
//
/*在不使用array类的情况下完成程序清单7.15所做的工作。编写
两个这样的版本：
a．使用const char *数组存储表示季度名称的字符串，并使用double
数组存储开支。
b．使用const char *数组存储表示季度名称的字符串，并使用一个
结构，该结构只有一个成员——一个用于存储开支的double数组。这种
设计与使用array类的基本设计类似*/

#include <iostream>
using namespace std;

const int Seasons = 4;
const char *Season_names[Seasons] = {"Spring", "Summer", "Autumn", "Winter"};
// double expenses[Seasons] = {10000, 15000, 20000, 25000};
void fill(double pa[Seasons]);
void show(double da[Seasons]);

int main() {
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(double pa[Seasons]) {
    for (int i = 0; i < Seasons; i++) {
        cout << "Enter " << Season_names[i] << " expenses: ";
        cin >> (pa)[i];
    }
}

void show(double da[Seasons]) {
    double total = 0.0;
    for (int i = 0; i < Seasons; i++) {
        cout << "Season_name:" << Season_names[i] << " expenses:" << da[i] << endl;
        total += da[i];
    }
    cout << endl;
    cout << "Total expenses: " << total << endl;
}