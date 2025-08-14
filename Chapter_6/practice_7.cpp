//
// Created by 14412 on 2025/8/14.
//
/*编写一个程序，它每次读取一个单词，直到用户只输入q。然
后，该程序指出有多少个单词以元音打头，有多少个单词以辅音打头，
还有多少个单词不属于这两类。为此，方法之一是，使用isalpha( )来区
分以字母和其他字符打头的单词，然后对于通过了isalpha( )测试的单
词，使用if或switch语句来确定哪些以元音打头*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    system("chcp 65001"); // 设置控制台编码为UTF-8
    string word;
    //元音 辅音单词计数
    int vowelCount = 0, consonantCount = 0, otherCount = 0;
    while (cin >> word) {
        //如果输入的word为q，则直接退出
        if (word == "q") {
            //输出统计结果
            cout << "元音单词个数：" << vowelCount << endl;
            cout << "辅音单词个数：" << consonantCount << endl;
            cout << "其他单词个数：" << otherCount << endl;
            cout << "程序结束" << endl;
            return 0;
        }
        auto ch = static_cast<unsigned char>(word[0]);
        if (isalpha(ch)) {
            char c = static_cast<char>(tolower(ch));
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                ++vowelCount;
            } else {
                ++consonantCount;
            }
        } else {
            ++otherCount;
        }

    }
    return 0;
}