//
// Created by 14412 on 2025/8/20.
//
/* 修改程序清单 8.14，使其使用两个名为 SumArray()的模板函数
来返回数组元素的总和，而不是显示数组的内容。程序应显示thing的总
和以及所有debt的总和 */

#include <iostream>
using namespace std;

struct debts {
    char name[50];
    double amount;
};

// 用于普通数组的模板
template<typename T>
double SumArray(T arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// 用于指针数组的模板（数组元素为指针，需解引用）
template<typename T>
double SumArray(T* arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *arr[i];
    }
    return sum;
}

int main() {
    system("chcp 65001");
    int things[6] = {13, 31, 103, 301, 310, 130};
    debts mr_E[3] = {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double *pd[3];
    for (int i = 0; i < 3; i++) {
        pd[i] = &mr_E[i].amount;
    }

    double things_sum = SumArray(things, 6);
    double debts_sum = SumArray(pd, 3);

    cout << "things 的总和: " << things_sum << endl;
    cout << "debt 的总和: " << debts_sum << endl;

    return 0;
}
