//
// Created by 14412 on 25-8-24.
//

#ifndef SALE_H
#define SALE_H

namespace SALES {
    const int QUARTERS = 4;
    struct Sales {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    /* 从数组ar中复制4个或n个（以较少者为准）项目到销售成员s，
     * 并计算和存储输入项目的平均值、最大值和最小值；如果销售中还有剩余元素，则将其设置为0 */
    void setSales(Sales &s, const double ar[], int n);
    //以交互方式收集4个季度的销售额，并将其存储
    //在s的销售成员中，计算并存储
    //平均值、最大值和最小值
    void setSales(Sales &s);
    //显示结构s中的所有信息
    void showSales(const Sales &s);
}

#endif //SALE_H
