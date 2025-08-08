//
// Created by 14412 on 25-8-9.
//
#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
    string band;
    double weight{};
    int calories{};
};

int main() {
    //创建包含3个元素的CandyBar数组
    CandyBar* snack = new CandyBar[3];
    //分别对数组内3个元素初始化；
    snack[0] = {"Mocha Munch", 2.3, 350};
    snack[1] = {"Snickerdoodle", 2.5, 400};
    snack[2] = {"Twix", 2.8, 450};
    //分别输出snack的所有内容
    for (int i = 0; i < 3; i++) {
        cout << snack[i].band << endl;
        cout << snack[i].weight << endl;
        cout << snack[i].calories << endl;
    }
    delete[] snack;
    return 0;
}