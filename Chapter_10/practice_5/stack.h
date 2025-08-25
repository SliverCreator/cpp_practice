//
// Created by 14412 on 2025/8/25.
//

#ifndef CPP_PRACTICE_STACK_H
#define CPP_PRACTICE_STACK_H

class stack {
public:
    struct customer {
        char fullname[35];
        double payment;
    };
    stack();
    ~stack();
    bool isFull() const;
    bool isEmpty() const;
    bool push(const customer &c);
    bool pop(customer &c);
private:
    customer *data;
    int top;
};

#endif //CPP_PRACTICE_STACK_H