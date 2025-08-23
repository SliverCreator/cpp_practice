//
// Created by 14412 on 25-8-23.
//
/* 第一个文件是一个头文件，其中包含名称空间；第二个文件是一个
源代码文件，它对这个名称空间进行扩展，以提供这三个函数的定义；
第三个文件声明两个Sales对象，并使用setSales( )的交互式版本为一个
结构提供值，然后使用setSales( )的非交互式版本为另一个结构提供值。
另外它还使用showSales( )来显示这两个结构的内容 */

#include "sale.h"
#include <iostream>

int main() {
    SALES::Sales sales_1{};
    SALES::Sales sales_2{};
    SALES::setSales(sales_1);
    const double ar[] = {100, 200, 300, 400};
    int n = 4;
    SALES::setSales(sales_2, ar ,4);
    SALES::showSales(sales_1);
    SALES::showSales(sales_2);
}