//
// Created by 14412 on 2025/8/25.
//
#include "bank.h"
#include <iostream>
#include <string>

int main() {
    BankAccount account = BankAccount("Qzx", "123456", 10000);
    account.deposit(1000);
    account.withdraw(500);
    account.show();
    return 0;
}