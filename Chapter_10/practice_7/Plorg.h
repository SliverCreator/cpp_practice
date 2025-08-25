//
// Created by 14412 on 2025/8/25.
//

#ifndef CPP_PRACTICE_PLORG_H
#define CPP_PRACTICE_PLORG_H

class Plorg {
private:
    char name[19];
    int CI;
public:
    Plorg(const char *n = "Plorga", int c = 50);
    void set_CI(int c);
    void show() const;
};

#endif //CPP_PRACTICE_PLORG_H