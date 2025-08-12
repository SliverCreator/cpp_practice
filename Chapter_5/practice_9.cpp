//
// Created by 14412 on 2025/8/12.
//
/* 编写一个满足前一个练习中描述的程序，但使用string对象而不
是字符数组。请在程序中包含头文件string，并使用关系运算符来进行
比较测试*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    system("chcp 65001");
    //创建string数组
    string word;
    int count = 0;
    cout << "请输入单词" << endl;
    while (cin >> word) {
        //使用关系运算符比较是否输入的为done
        if (word == "done") {
            break;
        }
        cin.get();
        count++;
    }
    //输出单词数量
    cout << "单词数量" << count << endl;
    return 0;
}