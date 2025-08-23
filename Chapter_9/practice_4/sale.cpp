//
// Created by 14412 on 25-8-24.
//
//对sale.h的函数进行实现

#include "sale.h"
#include <iostream>

void SALES::setSales(Sales &s, const double ar[], int n) {
    /* 从数组ar中复制4个或n个（以较少者为准）项目到sales，
    * 并计算和存储输入项目的平均值、最大值和最小值；如果sales中还有剩余元素，则将其设置为0 */
    int items = n < QUARTERS ? n : QUARTERS;
    double sum = 0;
    s.max = ar[0];
    s.min = ar[0];
    for (int i = 0; i < QUARTERS; i++) {
        if (i < items) {
            s.sales[i] = ar[i];
            sum += ar[i];
            if (ar[i] > s.max) s.max = ar[i];
            if (ar[i] < s.min) s.min = ar[i];
        } else {
            s.sales[i] = 0;
        }
    }
    s.average = sum / items;
}

void SALES::setSales(Sales &s) {
    system("chcp 65001");
    double sum = 0;
    for (int i = 0; i < QUARTERS; i++) {
        std::cout << "输入第" << i+1 << "个季度的销售额：";
        std::cin >> s.sales[i];
        if (i == 0) {
            s.max = s.sales[i];
            s.min = s.sales[i];
        }
        else{
            if (s.sales[i] > s.max) s.max = s.sales[i];
            if (s.sales[i] < s.min) s.min = s.sales[i];
        }

        sum += s.sales[i];
    }
    s.average = sum / QUARTERS;
}

void SALES::showSales(const Sales &s) {
    //显示结构所有信息
    for (int i = 0; i < QUARTERS; i++) {
        std::cout << "第" << i+1 << "季度的销售额:";
        std::cout << s.sales[i] << std::endl;
    }
    std::cout << "最大销售额:" << s.max << std::endl;
    std::cout << "最小销售额：" << s.min << std::endl;
    std::cout << "平均销售额：" << s.average << std::endl;
}


