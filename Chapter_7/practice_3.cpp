//
// Created by 14412 on 25-8-17.
//
/*a．编写一个函数，按值传递box结构，并显示每个成员的值。
b．编写一个函数，传递box结构的地址，并将volume成员设置为其
他三维长度的乘积。
c．编写一个使用这两个函数的简单程序*/

#include <iostream>
using namespace std;

struct Box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void print_box(const Box &box);
void set_volume(Box *box);
void cal_print(Box &box);

int main() {
    Box box{};
    cout << "please input box info:" << endl;
    cout << "maker: ";
    cin >> box.maker;
    cout << "height: ";
    cin >> box.height;
    cout << "width: ";
    cin >> box.width;
    cout << "length: ";
    cin >> box.length;
    cout << "volume: ";
    cin >> box.volume;
    cal_print(box);
    return 0;
}

void print_box(const Box &box) {
    cout << "maker: " << box.maker << endl;
    cout << "height: " << box.height << endl;
    cout << "width: " << box.width << endl;
    cout << "length: " << box.length << endl;
    cout << "volume: " << box.volume << endl;
}

void set_volume(Box *box) {
    box->volume = box->height * box->width * box->length;
}

void cal_print(Box &box) {
    print_box(box);
    set_volume(&box);
    print_box(box);
}