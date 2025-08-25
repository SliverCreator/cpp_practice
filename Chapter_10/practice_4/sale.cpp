//
// Created by 14412 on 2025/8/25.
//

#include "sale.h"
#include <iostream>

SALES::sale::sale(const double ar[], int n) {
    int items = n < QUARTERS ? n : QUARTERS;
    double sum = 0;
    data.max = ar[0];
    data.min = ar[0];
    for (int i = 0; i < QUARTERS; i++) {
        if (i < items) {
            data.sales[i] = ar[i];
            sum += ar[i];
            if (ar[i] > data.max) data.max = ar[i];
            if (ar[i] < data.min) data.min = ar[i];
        } else {
            data.sales[i] = 0;
        }
    }
    data.average = items > 0 ? (sum / items) : 0;
}

SALES::sale::sale() {
    double sum = 0;
    for (int i = 0; i < QUARTERS; i++) {
        std::cout << "Input " << i + 1 << " sale number:";
        std::cin >> data.sales[i];
        if (i == 0) {
            data.max = data.sales[i];
            data.min = data.sales[i];
        } else {
            if (data.sales[i] > data.max) data.max = data.sales[i];
            if (data.sales[i] < data.min) data.min = data.sales[i];
        }
        sum += data.sales[i];
    }
    data.average = sum / QUARTERS;
}

void SALES::sale::showSales() const {
    //Display all structure information
    for (int i = 0; i < QUARTERS; i++) {
        std::cout << "Quarter " << i + 1 << " sales: ";
        std::cout << data.sales[i] << std::endl;
    }
    std::cout << "Maximum sales: " << data.max << std::endl;
    std::cout << "Minimum sales: " << data.min << std::endl;
    std::cout << "Average sales: " << data.average << std::endl;
}
