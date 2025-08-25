//
// Created by 14412 on 2025/8/25.
//
#include "sale.h"
#include <iostream>

int main() {
    const double sales_data[] = {1200.0, 1400.0, 1600.0, 1800.0};

    // Create first instance using parameterized constructor
    SALES::sale sale1(sales_data, 4);
    std::cout << "Sales data for first instance:" << std::endl;
    sale1.showSales();

    // Create second instance using default constructor
    std::cout << "\nEnter sales data for second instance:" << std::endl;
    SALES::sale sale2;
    std::cout << "\nSales data for second instance:" << std::endl;
    sale2.showSales();

    return 0;
}
