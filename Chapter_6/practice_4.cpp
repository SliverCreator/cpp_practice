//
// Created by 14412 on 25-8-13.
//
/*．加入Benevolent Order of Programmer后，在BOP大会上，人们便
可以通过加入者的真实姓名、头衔或秘密BOP姓名来了解他（她）。请
编写一个程序，可以使用真实姓名、头衔、秘密姓名或成员偏好来列出
成员。*/

#include <iostream>
#include <string>
using namespace std;

struct bop {
    string name; // real name
    string title; // job title
    string bop_name; // bop name
    int performance; // 0 = name, 1 = title, 2 = bop name
};

int main() {
    system("chcp 65001");
    //创建bop结构的数组
    bop members[3];
    //为members填充内容
    members[0].name = "John";
    members[0].title = "President";
    members[0].bop_name = "Jackson";
    members[0].performance = 0;
    members[1].name = "Mary";
    members[1].title = "Vice President";
    members[1].bop_name = "Maryanne";
    members[1].performance = 1;
    members[2].name = "Bob";
    members[2].title = "Secretary";
    members[2].bop_name = "Bobbie";
    members[2].performance = 2;
    cout << "请选择要展示的方式：" << endl;
    cout << "a, display by name" << "   " << "b, display by title" << endl;
    cout << "c, display by bop name" << "   " << "d, display by preference" << endl;
    cout << "q, quit" << endl;
    char choice;
    cout << "输入你的选择：";
    cin >> choice;
    while (choice != 'q') {
        switch (choice) {
            case 'a':
                for (int i = 0; i < 3; i++) {
                    cout << members[i].name << endl;
                }
                break;
            case 'b':
                for (int i = 0; i < 3; i++) {
                    cout << members[i].title << endl;
                }
                break;
            case 'c':
                for (int i = 0; i < 3; i++) {
                    cout << members[i].bop_name << endl;
                }
                break;
            case 'd':
                for (int i = 0; i < 3; i++) {
                    switch (members[i].performance) {
                        case 0:
                            cout << members[i].name << endl;
                            break;
                        case 1:
                            cout << members[i].title << endl;
                            break;
                        case 2:
                            cout << members[i].bop_name << endl;
                            break;
                    }
                }
                break;
            case 'q':
                cout << "quit" << endl;
                break;
        }
        cout << "请再次选择：";
        cin >> choice;
    }
    return 0;
}
