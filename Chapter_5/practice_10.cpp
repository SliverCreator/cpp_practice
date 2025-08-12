//
// Created by 14412 on 2025/8/12.
//
/*编写一个使用嵌套循环的程序，要求用户输入一个值，指出要
显示多少行。然后，程序将显示相应行数的星号，其中第一行包括一个
星号，第二行包括两个星号，依此类推。每一行包含的字符数等于用户
指定的行数，在星号不够的情况下，在星号前面加上句点*/

#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");
    //请输入行数
    cout << "请输入行数" << endl;
    int row;
    cin >> row;
    //嵌套循环，分别输出每行的句点和星号
    for (int i = row - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << ".";
        }
        for (int j = 0; j < row - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}