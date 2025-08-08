//
// Created by 14412 on 25-8-9.
//
#include <iostream>
using namespace std;

struct Pizza {
    string name;
    double diameter{};
    double weight{};
};

int main() {
    Pizza pizza;
    //用户输入pizza的各项信息
    cout << "Enter the name, diameter, and weight of the pizza: ";
    getline(cin >> ws, pizza.name);
    cin >> pizza.diameter >> pizza.weight;
    //输出用户输入的pizza信息
    cout << "The pizza you entered is: " << pizza.name << endl;
    cout << "The diameter of the pizza is: " << pizza.diameter << endl;
    cout << "The weight of the pizza is: " << pizza.weight << endl;
    return 0;
}