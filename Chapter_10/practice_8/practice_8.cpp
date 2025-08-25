#include <iostream>
#include "list.h"

// 访问函数：打印元素
void print_item(Item& x) {
    std::cout << x << ' ';
}

// 访问函数：元素自增
void inc_item(Item& x) {
    ++x;
}

int main() {
    std::cout << "Create list with capacity 5\n";
    List lst(5);

    std::cout << "Is empty? " << std::boolalpha << lst.isempty() << "\n";

    // 添加一些元素
    for (int i = 1; i <= 4; ++i) {
        bool ok = lst.add(i * 10);
        std::cout << "Add " << (i * 10) << (ok ? " OK" : " Failed") << "\n";
    }

    std::cout << "Current list (" << lst.size() << "/" << lst.capacity() << "): ";
    lst.visit(print_item);
    std::cout << "\nIs full? " << lst.isfull() << "\n";

    // 尝试填满
    bool ok = lst.add(50);
    std::cout << "Add 50 " << (ok ? "OK" : "Failed") << "\n";
    std::cout << "Is full? " << lst.isfull() << "\n";

    std::cout << "Visit: increment each item\n";
    lst.visit(inc_item);
    std::cout << "After increment: ";
    lst.visit(print_item);
    std::cout << "\n";

    std::cout << "Try add when full: ";
    ok = lst.add(60);
    std::cout << (ok ? "OK" : "Failed") << "\n";

    std::cout << "Is empty? " << lst.isempty() << "\n";
    return 0;
}
