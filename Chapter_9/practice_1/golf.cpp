//
// Created by 14412 on 25-8-23.
//
//在该文件中实现golf.h的函数定义

#include "golf.h"
#include <iostream>
#include <cstring>

using namespace std;

void set_golf(golf &g, const char *name, int handicap) {
    g.handicap = handicap;
    strcpy(g.fullname, name);
}

int set_golf(golf &g) {
    system("chcp 65001");
    cout << "请输入name:";
    if (cin.getline(g.fullname, 40)) {
        if (strlen(g.fullname) == 0) {  // 检查字符串长度是否为0
            return 0;
        }
        return 1;
    }
    return 0;
}

void handicap(golf &g, int hc) {
    g.handicap = hc;
}

void show_golf(const golf &g) {
    cout << "name: " << g.fullname << endl;
    cout << "handicap: " << g.handicap << endl;
}