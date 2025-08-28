//
// Created by 14412 on 2025/8/28.
//
// 重新设计实现：
// - 唯一存储为总磅数 pounds_，显示模式通过 mode_ 控制
// - << 依据 mode_ 输出三种格式
// - +, -, *（双侧）按总磅数计算，结果沿用左操作数的模式（乘法沿用被乘数的模式）

#include "stonewt.h"
#include <ostream>
#include <iomanip>
#include <cmath>

StoneWt::StoneWt() : pounds_(0.0), mode_(FLOAT_POUND) {}

StoneWt::StoneWt(int stn, double lbs, Mode m) : mode_(m) {
    pounds_ = stn * static_cast<double>(Lbs_per_stn) + lbs;
}

StoneWt::StoneWt(double lbs, Mode m) : pounds_(lbs), mode_(m) {}

// 友元运算：加
StoneWt operator+(const StoneWt &a, const StoneWt &b) {
    StoneWt r(a.pounds_ + b.pounds_, a.mode_);
    return r;
}

// 友元运算：减（a - b）
StoneWt operator-(const StoneWt &a, const StoneWt &b) {
    StoneWt r(a.pounds_ - b.pounds_, a.mode_);
    return r;
}

// 友元运算：标量 * 重量
StoneWt operator*(double k, const StoneWt &w) {
    StoneWt r(k * w.pounds_, w.mode_);
    return r;
}

// 友元运算：重量 * 标量
StoneWt operator*(const StoneWt &w, double k) {
    return k * w;
}

// 友元输出
std::ostream &operator<<(std::ostream &os, const StoneWt &w) {
    // 保护原有流状态
    std::ios::fmtflags f = os.flags();
    std::streamsize p = os.precision();

    switch (w.mode_) {
        case StoneWt::STONE: {
            // 将总磅数转换为“英石 + 余磅”，对负值也合理处理
            double total = w.pounds_;
            int stn = static_cast<int>(std::floor(total / StoneWt::Lbs_per_stn));
            double pds_left = total - stn * StoneWt::Lbs_per_stn;
            os.setf(std::ios::fixed, std::ios::floatfield);
            os.precision(2);
            os << stn << " stones, " << pds_left << " pounds";
            break;
        }
        case StoneWt::INT_POUND: {
            long long lbs_int = static_cast<long long>(std::llround(w.pounds_));
            os << lbs_int << " pounds";
            break;
        }
        case StoneWt::FLOAT_POUND: {
            os.setf(std::ios::fixed, std::ios::floatfield);
            os.precision(2);
            os << w.pounds_ << " pounds";
            break;
        }
    }

    // 还原流状态
    os.flags(f);
    os.precision(p);
    return os;
}

// 关系运算符（按总磅数比较）
bool operator<(const StoneWt &a, const StoneWt &b)  { return a.pounds_ <  b.pounds_; }
bool operator>(const StoneWt &a, const StoneWt &b)  { return a.pounds_ >  b.pounds_; }
bool operator<=(const StoneWt &a, const StoneWt &b) { return a.pounds_ <= b.pounds_; }
bool operator>=(const StoneWt &a, const StoneWt &b) { return a.pounds_ >= b.pounds_; }
bool operator==(const StoneWt &a, const StoneWt &b) { return a.pounds_ == b.pounds_; }
bool operator!=(const StoneWt &a, const StoneWt &b) { return a.pounds_ != b.pounds_; }
