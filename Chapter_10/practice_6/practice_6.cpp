//
// Created by 14412 on 2025/8/25.
//
#include "Move.h"
#include <iostream>

int main() {
    Move one(5,8);
    Move two(10,12);
    one.show_move();
    two.show_move();
    one = one.add(two);
    one.show_move();
    return 0;
}