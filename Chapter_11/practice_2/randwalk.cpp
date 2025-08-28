//
// Created by 14412 on 25-8-28.
//
#include <iostream>    // 用于输入输出操作
#include <cstdlib>     // 用于rand()函数
#include <ctime>       // 用于time()函数，提供随机数种子
#include <fstream>
#include "vector_2.h"    // 包含自定义的Vector类
using namespace std;
using VECTOR_2::Vector_2;  // 使用VECTOR命名空间中的Vector类

int main() {
    system("chcp 65001");
    // 打开输出文件
    ofstream fout("walk.txt");
    if (!fout.is_open()) {
        cout << "无法打开输出文件" << endl;
        return 1;
    }
    srand(time(0));    // 初始化随机数生成器，使用当前时间作为种子
    double direction;   // 用于存储随机方向（角度）
    Vector_2 step;        // 表示每一步的向量
    Vector_2 result(0.0, 0.0);  // 初始化结果向量，起始位置为原点
    unsigned long steps = 0;   // 记录走的步数
    double target;      // 目标距离
    double dstep;       // 每一步的长度
    cout << "Enter target distance (q to quit):";
    while (cin >> target) {    // 循环读取目标距离，直到输入非数字
        cout << "Enter step length:";
        if (!(cin >> dstep)) { // 读取每步长度
            break;             // 如果输入非数字则退出
        }
        // 写入初始条件
        fout << "目标距离: " << target << ", 步长： " << dstep << endl;
        fout << steps << ": (x,y) = " << result << endl;

        while (result.magval() < target) {  // 当当前位置到原点的距离小于目标距离时继续
            direction = rand() % 360;        // 生成0-359度的随机方向
            step.reset(dstep, direction, Vector_2::POL);  // 使用极坐标设置步长和方向
            result = result + step;          // 更新当前位置
            steps++;                         // 步数加1
            fout << steps << ": (x,y) = " << result << endl;
        }

        fout << "\n结果小结：" << endl;
        fout << "总步数: " << steps << endl;
        fout << "最终位置（直角坐标）: " << result << endl;
        result.polar_mode();
        fout << "最终位置（极坐标）: (" << result << ")" << endl;
        fout << "平均每步实际前进距离: " << result.magval() / steps << endl;
        fout << "\n----------------------------------------\n" << endl;

        cout << "After " << steps << " steps, the subject has the following location:" << endl;
        result.rect_mode();
        cout << result << endl;                // 输出结果向量（默认为直角坐标形式）
        result.polar_mode();                   // 将结果向量切换为极坐标显示模式
        cout << "or \n" << result << endl;     // 以极坐标形式输出结果
        cout << "Average outward distance per step = " << result.magval() / steps << endl;  // 计算并输出平均每步的距离
        steps = 0;                            // 重置步数计数器
        result.reset(0.0, 0.0);               // 重置位置为原点
        cout << "Enter target distance (q to quit):";
    }
    cout << "Done." << endl;
    fout.close();
    cin.clear();                              // 清除输入流的错误状态
    while (cin.get() != '\n') {              // 清空输入缓冲区
        continue;
    }
    return 0;                                // 程序正常结束
}