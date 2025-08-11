//
// Created by 14412 on 25-8-11.
//
/*．完成编程练习5，但这一次使用一个二维数组来存储输入—3年
中每个月的销售量。程序将报告每年销售量以及三年的总销售量。*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    system("chcp 65001");
    //初始化月份string数组
    //初始化对应月份销售数量数组
    int sales[3][13];
    int per_year_total_sales = 0;
    int total_sales = 0;
    //逐月输入储存入数组并进行累加
    for (int j = 0; j < 3; j++) {
        per_year_total_sales = 0;
        for (int i = 0; i < 12; i++) {
            const string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
            cout << "请输入第" << j+1 << "年" << months[i] << "的销售数量" << endl;
            cin >> sales[j][i];
            per_year_total_sales += sales[j][i];
        }
        sales[j][12] = per_year_total_sales;
        total_sales += per_year_total_sales;
    }
    //分别输出每年销售额和三年总额
    for (int j = 0; j < 3; j++) {
        cout << "第" << j+1 << "年销售额为" << sales[j][12] << endl;
    }
    cout << "销售总数为" << total_sales << endl;
    return 0;
}