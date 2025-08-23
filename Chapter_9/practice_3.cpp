//
// Created by 14412 on 25-8-23.
//
/* 编写一个程序，使用定位new运算符将一个包含两个这种结构的数
组放在一个缓冲区中。然后，给结构的成员赋值（对于char数组，使用
函数strcpy( )），并使用一个循环来显示内容。一种方法是像程序清单
9.10那样将一个静态数组用作缓冲区；另一种方法是使用常规new运算
符来分配缓冲区*/

#include <iostream>
#include <cstring>
using namespace std;

struct chaff {
    char dross[20];
    int slag;
};

int main() {
    //使用定位new给chaffs分配
    char *buffer = new char[sizeof(chaff) * 2];
    chaff *p1 = new(buffer) chaff;
    chaff *p2 = new(buffer + sizeof(chaff)) chaff;
    strcpy(p1->dross, "test1");
    p1->slag = 1;
    strcpy(p2->dross, "test2");
    p2->slag = 2;
    for (int i = 0; i < 2; i++) {
        cout << "dross: " << (reinterpret_cast<chaff *>(buffer) + i)->dross << endl;
        cout << "slag: " << (reinterpret_cast<chaff *>(buffer) + i)->slag << endl;
    }
    delete [] buffer;
}
