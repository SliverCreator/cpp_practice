//
// Created by 14412 on 2025/8/28.
//
// 重新设计的 StoneWt：
// - 内部以“总磅数(double)”为唯一存储，避免冗余与不一致
// - 增加状态 Mode：控制输出为 英石、整数磅 或 浮点磅
// - 重载 << 替代 show_* 显示函数
// - 支持 +, -, *（双侧）算术运算

#ifndef CPP_PRACTICE_STONEWT_H
#define CPP_PRACTICE_STONEWT_H

#include <iosfwd>

class StoneWt {
public:
    enum Mode { STONE, INT_POUND, FLOAT_POUND };

private:
    enum { Lbs_per_stn = 14 };
    double pounds_;   // 总磅数（唯一真实存储）
    Mode mode_;       // 当前显示模式

public:
    // 构造
    StoneWt();                                  // 默认 0 磅，FLOAT_POUND 模式
    StoneWt(int stn, double lbs, Mode m = STONE);    // 指定英石+磅，并设定模式
    StoneWt(double lbs, Mode m = FLOAT_POUND);       // 指定总磅，并设定模式

    // 模式切换
    void set_stone()       { mode_ = STONE; }
    void set_int_pound()   { mode_ = INT_POUND; }
    void set_float_pound() { mode_ = FLOAT_POUND; }

    // 友元算术运算
    friend StoneWt operator+(const StoneWt &a, const StoneWt &b);
    friend StoneWt operator-(const StoneWt &a, const StoneWt &b);
    friend StoneWt operator*(double k, const StoneWt &w);
    friend StoneWt operator*(const StoneWt &w, double k);

    // 友元输出
    friend std::ostream &operator<<(std::ostream &os, const StoneWt &w);
};

#endif //CPP_PRACTICE_STONEWT_H