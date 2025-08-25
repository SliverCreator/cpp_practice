//
// Created by 14412 on 2025/8/25.
//

#ifndef CPP_PRACTICE_BANK_H
#define CPP_PRACTICE_BANK_H
#include <string>

class BankAccount {
private:
    std::string m_name;
    std::string m_accountNumber;
    double m_balance;
public:
    BankAccount();
    BankAccount(const std::string &name, const std::string &accountNumber, double balance);
    void show() const;
    void deposit(double cash);
    void withdraw(double cash);
};

#endif //CPP_PRACTICE_BANK_H