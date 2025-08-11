//
// Created by 14412 on 25-8-11.
//
/*设计一个名为car的结构，用它存储下述有关汽车的信息：生产
商（存储在字符数组或string对象中的字符串）、生产年份（整数）。
编写一个程序，向用户询问有多少辆汽车。随后，程序使用new来创建
一个由相应数量的car结构组成的动态数组。接下来，程序提示用户输
入每辆车的生产商（可能由多个单词组成）和年份信息。请注意，这需
要特别小心，因为它将交替读取数值和字符串（参见第4章）。最后，
程序将显示每个结构的内容。*/

#include <iostream>
#include <string>
using namespace std;

struct Car {
    string manufacturer;
    int year;
};

int main() {
    system("chcp 65001");
    //询问用户有多少辆汽车
    int number_of_cars;
    cout << "请输入汽车数量";
    cin >> number_of_cars;
    Car *cars = new Car[number_of_cars];
    for (int i = 0; i < number_of_cars; i++) {
        //输入生产商和年份
        cout << "输入生产商：" << endl;
        cin.ignore();
        getline(cin, cars[i].manufacturer);
        cout << "输入年份：" << endl;
        cin >> cars[i].year;
    }
    // 分别打印出年份和生产商
    for (int i = 0; i < number_of_cars; i++) {
        cout << cars[i].manufacturer << " " << cars[i].year << endl;
    }
    delete[] cars;
    return 0;
}