//
// Created by 14412 on 25-8-20.
//
/*编写一个函数，它接受一个指向string对象的引用作为参数，并
将该string对象的内容转换为大写，为此可使用表6.4描述的函数toupper(
)。然后编写一个程序，它通过使用一个循环让您能够用不同的输入来
测试这个函数*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void print_string(string &str);
int main() {
    system("chcp 65001");
    string str;
    while (str != "q") {
        cout << "Enter a string(q to quit):";
        getline(cin, str);
        if (str == "q") {
            cout << "Quit" << endl;
            return 0;
        }
        print_string(str);
    }
}

void print_string(string &str) {
    for (char &i: str) {
        i = toupper(i);
    }
    cout << "The uppercase string is: " << str << endl;
}
