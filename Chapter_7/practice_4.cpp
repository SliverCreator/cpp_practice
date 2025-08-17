//
// Created by 14412 on 25-8-17.
//
/*．许多州的彩票发行机构都使用如程序清单7.4所示的简单彩票玩
法的变体。在这些玩法中，玩家从一组被称为域号码（field number）的
号码中选择几个。例如，可以从域号码1～47中选择5个号码；还可以从
第二个区间（如1～27）选择一个号码（称为特选号码）。要赢得头
奖，必须正确猜中所有的号码。中头奖的几率是选中所有域号码的几率
与选中特选号码几率的乘积。例如，在这个例子中，中头奖的几率是从
47个号码中正确选取5个号码的几率与从27个号码中正确选择1个号码的
几率的乘积。请修改程序清单7.4，以计算中得这种彩票头奖的几率*/

#include <iostream>
using namespace std;
long double probability(int total, int choices);

int main() {
    int total,choices;
    system("chcp 65001");
    long double rate1 = 0, rate2 = 0;
    cout << "请输入第一个区间选择总数和可选择总数：";
    while (cin >> total >> choices && choices <= total) {
        rate1 = probability(total, choices);
        break;
    }
    cout << "请输入第二个区间选择总数和可选择总数：";
    while (cin >> total >> choices && choices <= total) {
        rate2 = probability(total, choices);
        break;
    }
    cout << "中奖概率为：" << rate1 * rate2 << endl;
    return 0;
}

long double probability(int total, int choices) {
    long double result = 1;
    long double n;
    unsigned p;
    for (n = total,p = choices; p > 0; n--,p--) {
        result *= n;
        result /= p;
    }
    return result;
}