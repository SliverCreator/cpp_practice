//
// Created by 14412 on 25-8-23.
//
/* 用string对象代替字符数组。这样，该程序将
不再需要检查输入的字符串是否过长，同时可以将输入字符串同字符
串“”进行比较，以判断是否为空行*/

#include <iostream>
#include <string>
using namespace std;

void check_str(const string &str);

int main() {
    system("chcp 65001");
    string str;
    cout << "请输入字符串(输入空行结束)：" << endl;

    // 获取输入直到遇到空行
    while (getline(cin, str) && !str.empty()) {
        check_str(str);
    }

    return 0;

}

void check_str(const string &str) {
    // 静态变量用于跟踪所有字符串的统计信息
    static int total = 0;      // 累计处理的字符串数量
    static int chars = 0;      // 累计的字符总数
    static string longest;     // 最长的字符串

    // 当前字符串的字符数
    int count = str.length();

    // 更新统计信息
    total++;
    chars += count;

    // 更新最长字符串
    if (longest.length() < count) {
        longest = str;
    }

    // 输出当前字符串的信息
    cout << "当前字符串长度: " << count << endl;

    // 输出累计统计信息
    cout << "已处理字符串数量: " << total << endl;
    cout << "平均字符串长度: " << static_cast<double>(chars) / total << endl;
    cout << "最长字符串(" << longest.length() << "个字符): " << longest << endl;
    cout << "--------------------" << endl;
}