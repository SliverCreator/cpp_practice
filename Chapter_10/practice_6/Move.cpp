//
// Created by 14412 on 2025/8/25.
//
#include "Move.h"
#include <iostream>

Move::Move(double a, double b) {
    x = a;
    y = b;
}

void Move::show_move() const {
    std::cout << "x: " << x << ", y: " << y << std::endl;
}

Move Move::add(const Move &m) const {
    Move temp(x + m.x, y + m.y);
    return temp;
}

void Move::reset(double a, double b) {
    x=a;
    y=b;
}
