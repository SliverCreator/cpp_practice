//
// Demo: 使用 stack 添加/删除 customer，并在删除时累加 payment
//

#include "stack.h"
#include <iostream>
#include <limits>
#include <cstring>

int main() {
    stack s;
    double total_payment = 0.0;

    std::cout << "A) Add customer, P) Pop customer, Q) Quit\n";
    for (;;) {
        std::cout << "\nEnter command (A/P/Q): ";
        char cmd{};
        if (!(std::cin >> cmd)) {
            std::cerr << "Input error.\n";
            return 1;
        }
        // 丢弃行余留
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (cmd == 'Q' || cmd == 'q') {
            std::cout << "Bye.\n";
            break;
        } else if (cmd == 'A' || cmd == 'a') {
            stack::customer c{};
            std::string name;
            std::cout << "Enter fullname: ";
            std::getline(std::cin, name);
            // 拷贝到固定数组，确保以 '\0' 结尾
            std::strncpy(c.fullname, name.c_str(), sizeof(c.fullname) - 1);
            c.fullname[sizeof(c.fullname) - 1] = '\0';

            std::cout << "Enter payment: ";
            while (!(std::cin >> c.payment)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid number. Enter payment: ";
            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            if (s.push(c)) {
                std::cout << "Pushed: " << c.fullname << " (payment " << c.payment << ")\n";
            } else {
                std::cout << "Stack is full. Cannot push.\n";
            }
        } else if (cmd == 'P' || cmd == 'p') {
            stack::customer c{};
            if (s.pop(c)) {
                total_payment += c.payment;
                std::cout << "Popped: " << c.fullname << " (payment " << c.payment << ")\n";
                std::cout << "Total payment so far: " << total_payment << "\n";
            } else {
                std::cout << "Stack is empty. Nothing to pop.\n";
            }
        } else {
            std::cout << "Unknown command.\n";
        }
    }

    return 0;
}
