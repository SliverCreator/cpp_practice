//
// Created by 14412 on 2025/8/25.
//
#include "stack.h"
//
// Stack implementation
//

#include "stack.h"
#include <cstddef>

namespace {
    // 固定容量，不修改头文件接口的前提下在实现中定义
    constexpr int STACK_CAPACITY = 10;
}

stack::stack() : data(new customer[STACK_CAPACITY]), top(0) {}

stack::~stack() {
    delete[] data;
    data = nullptr;
    top = 0;
}

bool stack::isFull() const {
    return top >= STACK_CAPACITY;
}

bool stack::isEmpty() const {
    return top == 0;
}

bool stack::push(const customer &c) {
    if (isFull()) return false;
    data[top++] = c;
    return true;
}

bool stack::pop(customer &c) {
    if (isEmpty()) return false;
    c = data[--top];
    return true;
}
