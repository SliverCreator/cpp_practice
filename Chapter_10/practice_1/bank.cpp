//
// Created by 14412 on 2025/8/25.
//

#include "bank.h"
#include <iostream>
#include <string>

BankAccount::BankAccount() {
    m_name = "No Name";
    m_accountNumber = "000000";
    m_balance = 0;
}

BankAccount::BankAccount(const std::string &name, const std::string &accountNumber, const double balance) {
    m_name = name;
    m_accountNumber = accountNumber;
    m_balance = balance;
}

void BankAccount::show() const {
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Account Number: " << m_accountNumber << std::endl;
    std::cout << "Balance: " << m_balance << std::endl;
}

void BankAccount::deposit(const double cash) {
    m_balance += cash;
}

void BankAccount::withdraw(const double cash) {
    m_balance -= cash;
}

