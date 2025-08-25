//
// Created by 14412 on 25-8-23.
//
//在该文件中实现golf.h的函数定义

#include "golf.h"
#include <iostream>
#include <cstring>

golf::golf() {
    m_handicap = 0;
    strcpy(m_fullname, "No Name");
}

golf::golf(const char *name, int hc)  {
    m_handicap = hc;
    strcpy(m_fullname, name);
}

void golf::set_golf() {
    char fullname[Len];
    int handicap;
    std::cout << "Please input your name: ";
    std::cin.getline(fullname, Len);
    std::cout << "Please input your handicap: ";
    std::cin >> handicap;
    *this = golf(fullname, handicap);
}

void golf::show_golf() const {
    std::cout << "Name: " << m_fullname << std::endl;
    std::cout << "Handicap: " << m_handicap << std::endl;
}

