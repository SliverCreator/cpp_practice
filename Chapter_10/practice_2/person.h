//
// Created by 14412 on 2025/8/25.
//

#ifndef CPP_PRACTICE_PERSON_H
#define CPP_PRACTICE_PERSON_H

#include <iostream>
#include <string>

class Person {
private:
    static const int LIMIT = 25;
    std::string m_lsat_name;
    char m_first_name[LIMIT];
public:
    Person();
    Person(const std::string &ln, const char *fn = "Heyyou");
    ~Person();
    void show() const;
    void FormalShow() const;
};

#endif //CPP_PRACTICE_PERSON_H