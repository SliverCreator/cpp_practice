//
// Created by 14412 on 25-8-20.
//
/* CandyBar结构包含3个成员。第一个成员存储candy bar的品牌名
称；第二个成员存储candy bar的重量（可能有小数）；第三个成员存储
candy bar的热量（整数）。请编写一个程序，它使用一个这样的函数，
即将CandyBar的引用、char指针、double和int作为参数，并用最后3个值
设置相应的结构成员。最后3个参数的默认值分别为“Millennium
Munch”、2.85和350。另外，该程序还包含一个以CandyBar的引用为参
数，并显示结构内容的函数。请尽可能使用const。*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct CandyBar {
    char band[10];
    double weight;
    int calories;
};
void set_candy_bar(CandyBar &candy_bar, const char *band = "Millennium Munch", double weight = 2.85, int calories = 350);
void print_candy_bar(const CandyBar &);

int main() {
    //创建candybar结构
    CandyBar mm{};
    set_candy_bar(mm);
    print_candy_bar(mm);
    return 0;
}

void set_candy_bar(CandyBar &candy_bar, const char *band, const double weight, const int calories) {
    //使用默认值为结构赋值
   strcpy(candy_bar.band, band);
    candy_bar.weight = weight;
    candy_bar.calories = calories;
}

void print_candy_bar(const CandyBar &candy_bar) {
    cout << candy_bar.band << endl;
    cout << candy_bar.weight << endl;
    cout << candy_bar.calories << endl;
}