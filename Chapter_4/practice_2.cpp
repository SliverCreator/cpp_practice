//
// Created by 14412 on 25-8-8.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string dessert;
    cout << "Enter your name: " << endl;
    getline(cin, name); //使用getline可以输入整行
    cout << "Enter your favorite dessert: " << endl;
    getline(cin, dessert);
    cout << "I have some delicious " << dessert << " for you, " << name << "!" << endl;
    return 0;
}