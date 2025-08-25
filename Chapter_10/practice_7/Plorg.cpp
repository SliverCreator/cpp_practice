//
// Created by 14412 on 2025/8/25.
//
#include "Plorg.h"
#include <iostream>
#include <cstring>

Plorg::Plorg(const char *n, int c) {
    strcpy(name, n);
    CI = c;
}

void Plorg::set_CI(int c) {
    CI = c;
}

void Plorg::show() const {
    std::cout << name << std::endl;
    std::cout << CI << std::endl;
}