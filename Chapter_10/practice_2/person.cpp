//
// Created by 14412 on 2025/8/25.
//
#include "person.h"
#include <iostream>
#include <string>
#include <cstring>

Person::Person() {
    m_lsat_name = "No Name";
    strcpy(m_first_name, "Heyyou");
}

Person::Person(const std::string &ln, const char *fn) {
    m_lsat_name = ln;
    strcpy(m_first_name, fn);
}

Person::~Person() {}

void Person::show() const {
    std::cout << m_first_name << std::endl;
    std::cout << m_lsat_name << std::endl;
}

void Person::FormalShow() const {
    std::cout << m_lsat_name << ", " << m_first_name << std::endl;
}