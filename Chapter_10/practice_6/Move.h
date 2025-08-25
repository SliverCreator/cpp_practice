//
// Created by 14412 on 2025/8/25.
//

#ifndef CPP_PRACTICE_MOVE_H
#define CPP_PRACTICE_MOVE_H

class Move {
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);
    void show_move() const;
    //此函数将m的x添加到调用对象的x以获得新的x，将m的y添加到调用对象的y以获得新y，创建一个初始化为新x、y值的新对象并返回它
    Move add(const Move &m) const;
    void reset(double a = 0, double b = 0);
};

#endif //CPP_PRACTICE_MOVE_H