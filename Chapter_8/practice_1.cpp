//
// Created by 14412 on 25-8-19.
//
/* 编写通常接受一个参数（字符串的地址），并打印该字符串的
函数。然而，如果提供了第二个参数（int类型），且该参数不为0，则
该函数打印字符串的次数将为该函数被调用的次数（注意，字符串的打
印次数不等于第二个参数的值，而等于函数被调用的次数）。*/

#include <iostream>
#include <string>
using namespace std;

void print_string(const string *str);
void print_string(const string *str, int times);

int main() {
    system("chcp 65001");
    string str = "hello";
    print_string(&str);
    print_string(&str, 3);
    print_string(&str, 2);
    print_string(&str, 1);
    print_string(&str, 0);
    return 0;
}
void print_string(const string *str) {
    cout << *str << endl;
}
void print_string(const string *str, int times) {
    static int count = 0;
    if (times != 0) {
        count++;
        for (int i = 0; i < count; i++) {
            cout << *str << endl;
        }
    }
}