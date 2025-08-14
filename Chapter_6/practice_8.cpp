//
// Created by 14412 on 2025/8/14.
//
/* 编写一个程序，它打开一个文件文件，逐个字符地读取该文
件，直到到达文件末尾，然后指出该文件中包含多少个字符*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    system("chcp 65001");
    //打开文件
    ifstream inFile;
    inFile.open("test.txt");
    //逐字符读取文件
    char ch;
    int count = 0;
    while (inFile.get(ch)) {
        count++;
    }
    inFile.close();
    cout << "文件中包含的字符数为: " << count << endl;
    return 0;
}