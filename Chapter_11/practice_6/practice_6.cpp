//
// Chapter 11 - practice_6 测试程序
// 要求：
// 1) 声明包含6个 StoneWt 对象的数组，前3个在声明时初始化
// 2) 使用循环输入设置剩余3个元素（以英石+磅输入）
// 3) 报告数组中的最小值、最大值，以及大于等于11英石的元素数量

#include <iostream>
#include "stonewt.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    // 前3个初始化，混合使用不同构造
    StoneWt arr[6] = {
        StoneWt(11, 0),            // 11 stones
        StoneWt(160.5),            // 160.5 pounds
        StoneWt(9, 8.0)            // 9 stones, 8 pounds
    };

    // 输入后三个：以“英石 + 磅”形式
    for (int i = 3; i < 6; ++i) {
        int stn;
        double lbs;
        cout << "Enter stone for arr[" << i << "]: ";
        if (!(cin >> stn)) return 0;
        cout << "Enter leftover pounds for arr[" << i << "]: ";
        if (!(cin >> lbs)) return 0;
        arr[i] = StoneWt(stn, lbs);  // 默认 STONE 模式
    }

    // 统计最小/最大
    int min_idx = 0, max_idx = 0;
    for (int i = 1; i < 6; ++i) {
        if (arr[i] < arr[min_idx]) min_idx = i;
        if (arr[i] > arr[max_idx]) max_idx = i;
    }

    // 统计 >= 11 stones 的数量（使用比较运算，避免常量泄露）
    StoneWt threshold(11, 0); // 11 英石
    int ge_cnt = 0;
    for (const auto &w : arr) {
        if (w >= threshold) ++ge_cnt;
    }

    cout << "\nSummary:\n";
    cout << "Min: " << arr[min_idx] << " (index " << min_idx << ")\n";
    cout << "Max: " << arr[max_idx] << " (index " << max_idx << ")\n";
    cout << "Count >= 11 stones: " << ge_cnt << endl;

    return 0;
}
