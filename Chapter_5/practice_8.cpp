//
// Created by 14412 on 25-8-12.
//
/* 编写一个程序，它使用一个char数组和循环来每次读取一个单
词，直到用户输入done为止。随后，该程序指出用户输入了多少个单词
（不包括done在内）*/

#include <cstring>
#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");
    //创建char数组
    char words[100];
    int count = 0;
    cout << "请输入单词（输入done结束）:" << endl;
    //循环输入单词储存在words，当读取到回车符表示单词完整读入，计数加一并清空words
    //读取到done单词则结束
    while (cin.get(words, 100)) {
        if (strcmp(words, "done") == 0)
            break;
        cin.get(); // 读取换行符
        count++;
    }
    //输出单词数量
    cout << "单词数量" << count << endl;
    return 0;
}