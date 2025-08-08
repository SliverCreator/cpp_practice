//
// Created by 14412 on 25-8-9.
//
#include <iostream>
#include <array>
using namespace std;

int main() {
    system("chcp 65001");
    array<double, 3> grades;
    //输入第一次成绩并储存
    cout << "请输入第一次成绩：" << endl;
    cin >> grades[0];
    //请输入第二次成绩
    cout << "请输入第二次成绩：" << endl;
    cin >> grades[1];
    //请输入第三次成绩
    cout << "请输入第三次成绩：" << endl;
    cin >> grades[2];
    //对grades储存的成绩取平均，并输出总次数和平均成绩
    double sum = grades[0] + grades[1] + grades[2];
    double average = sum / grades.size();
    cout << "总次数为：" << grades.size() << endl;
    cout << "平均成绩为：" << average << endl;
}
