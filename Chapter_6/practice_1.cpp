//
// Created by 14412 on 25-8-13.
//
/*编写一个程序，读取键盘输入，直到遇到@符号为止，并回显
输入（数字除外），同时将大写字符转换为小写，将小写字符转换为大
写（别忘了cctype函数系列）*/

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char c;
    while ((c = getchar()) != '@') {
        if (isalpha(c)) {
            if (isupper(c)) {
                putchar(tolower(c));
            } else {
                putchar(toupper(c));
            }
        }
        else if (!isdigit(c)){
            putchar(c);
        }
        putchar('\n');
    }
    return 0;
}