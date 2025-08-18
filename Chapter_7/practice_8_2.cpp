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

struct expenses {
    double expense[Seasons];
};

void fill(expenses *expenses);

void show(expenses *expenses);

int main() {
    expenses expenses{};
    fill(&expenses);
    show(&expenses);
    return 0;
}

void fill(expenses *expenses) {
    for (int i = 0; i < Seasons; i++) {
        cout << "Enter " << Season_names[i] << " expenses: ";
        cin >> expenses->expense[i];
    }
}

void show(expenses *expenses) {
    double total = 0.0;
    for (int i = 0; i < Seasons; i++) {
        cout << "Season_name:" << Season_names[i] << " expenses:" << expenses->expense[i] << endl;
        total += expenses->expense[i];
    }
    cout << endl;
    cout << "Total expenses: " << total << endl;
}
