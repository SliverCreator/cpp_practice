//
// Created by 14412 on 2025/8/20.
//
/* 请提供其中描述的函数和原型，从而完成该程序。注意，应有两个
show( )函数，每个都使用默认参数。请尽可能使用cosnt参数。set( )使用
new分配足够的空间来存储指定的字符串。这里使用的技术与设计和实
现类时使用的相似。（可能还必须修改头文件的名称，删除using编译指
令，这取决于所用的编译器。） */

#include <iostream>
#include <set>
using namespace std;
#include <cstring>

struct stringy {
    char *str;
    int ct;//字符串长度不计算‘/0’
};
void set_value(stringy &beany, const char *testing);
void show(const stringy &beany, int times = 1);
void show(const char *testing, int times = 1);

int main() {
    stringy beany{};
    char testing[] = "Reality isn't what it used to be.";
    /* 第一个参数是一个引用，分配空间来保存测试的副本，
     * 将 beany 的 str 成员设置为指向新块，
     * 将测试复制到新块，并设置 beany 的 ct 成员 */
    set_value(beany, testing);
    show(beany);
    show(beany,2);// 打印成员字符串两次
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Done!");
    return 0;
}

void set_value(stringy &beany, const char *testing) {
    beany.str = new char[strlen(testing) + 1];
    strcpy(beany.str, testing);
    beany.ct = strlen(testing);
}

void show(const stringy &beany, int times) {
    for (int i = 0; i < times; i++) {
        cout << beany.str << endl;
    }
}

void show(const char *testing, int times) {
    for (int i = 0; i < times; i++) {
        cout << testing << endl;
    }
}