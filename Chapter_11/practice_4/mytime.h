//
// Created by 14412 on 2025/8/28.
//

#ifndef CPP_PRACTICE_MYTIME_H
#define CPP_PRACTICE_MYTIME_H
#include <iosfwd>

class Time {
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHour(int h);
    void Reset(int h = 0, int m = 0);
    // Time operator+(const Time &t) const;
    friend Time operator+(const Time &t1, const Time &t2);
    // Time operator-(const Time &t) const;
    friend Time operator-(const Time &t1, const Time &t2);
    // Time operator*(double n) const;
    friend Time operator*(double m, const Time &t);
    friend Time operator*(const Time &t, double m);
    friend std::ostream &operator<<(std::ostream &os, const Time &t);
};

#endif //CPP_PRACTICE_MYTIME_H