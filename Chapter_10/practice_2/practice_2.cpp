//
// Created by 14412 on 2025/8/25.
//
#include "person.h"
#include <iostream>
#include <string>

int main() {
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.show();
    std::cout << std::endl;
    one.FormalShow();
    std::cout << std::endl;
    two.show();
    std::cout << std::endl;
    two.FormalShow();
    std::cout << std::endl;
    three.show();
    std::cout << std::endl;
    three.FormalShow();
    std::cout << std::endl;
    return 0;
}