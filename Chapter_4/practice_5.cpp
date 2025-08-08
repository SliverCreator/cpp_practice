//
// Created by 14412 on 25-8-8.
//
#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
    string band;
    double weight;
    int calories;
};

int main() {
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    // 输出snack
    cout << snack.band << endl;
    cout << snack.weight << endl;
    cout << snack.calories << endl;
    return 0;
}