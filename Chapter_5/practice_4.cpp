//
// Created by 14412 on 25-8-11.
//
/*Daphne以10%的单利投资了100美元。也就是说，每一年的利润
都是投资额的10%，即每年10美元：
利息 = 0.10×原始存款
而Cleo以5%的复利投资了100美元。也就是说，利息是当前存款
（包括获得的利息）的5%，：
利息 = 0.05×当前存款
Cleo在第一年投资100美元的盈利是5%—得到了105美元。下一年
的盈利是105美元的5%—即5.25美元，依此类推。请编写一个程序，计
算多少年后，Cleo的投资价值才能超过Daphne的投资价值，并显示此时
两个人的投资价值。*/

#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");
    double daphne_money = 100;
    const double daphne_interest = daphne_money * 0.1;
    double cleo_money = 100;
    do {
        daphne_money += daphne_interest;
        cleo_money *= 1.05;
    }
    while (cleo_money <= daphne_money);
    //输出两人金钱
    cout << "daphne_money = " << daphne_money << endl;
    cout << "cleo_money = " << cleo_money << endl;
    return 0;
}