//
// Created by 14412 on 25-8-23.
//

#ifndef GOLF_H
#define GOLF_H

const int Len = 40;
struct golf {
    char fullname[Len];
    int handicap;
};

//非交互版本：
//函数为golf结构设置全部内容，将内容用参数直接传入
void set_golf(golf &g, const char *name, int handicap);

//交互版本：
//在函数内让用户输入结构内容
//将输入的内容传给结构
//如果输入了fullname则返回1，如果输入为空则返回0
int set_golf(golf &g);
//为handicap重新赋值
void handicap(golf &g, int handicap);

//展示结构内容
void show_golf(const golf &g);

#endif //GOLF_H
