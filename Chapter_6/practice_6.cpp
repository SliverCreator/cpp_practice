//
// Created by 14412 on 25-8-14.
//
/* 编写一个程序，记录捐助给“维护合法权利团体”的资金。该程
序要求用户输入捐献者数目，然后要求用户输入每一个捐献者的姓名和
款项。这些信息被储存在一个动态分配的结构数组中。每个结构有两个
成员：用来储存姓名的字符数组（或string对象）和用来存储款项的
double成员。读取所有的数据后，程序将显示所有捐款超过10000的捐
款者的姓名及其捐款数额。该列表前应包含一个标题，指出下面的捐款
者是重要捐款人（Grand Patrons）。然后，程序将列出其他的捐款者，
该列表要以Patrons开头。如果某种类别没有捐款者，则程序将打印单
词“none”。该程序只显示这两种类别，而不进行排序*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Patron {
    string name;
    double amount{};
};

int main() {
    system("chcp 65001");
    //输入捐献者数目
    int numDonors;
    int count = 0;
    cout << "请输入捐献者数目: ";
    cin >> numDonors;
    //根据捐献者数目创建动态数组
    vector<Patron> donors(numDonors);
    //输入每个捐献者名字和数额存入数组
    for (int i = 0; i < numDonors; i++) {
        cout << "请输入第" << i + 1 << "个捐献者的姓名: ";
        cin.ignore();
        getline(cin, donors[i].name);
        cout << "请输入" << donors[i].name << "的捐款数额: ";
        cin >> donors[i].amount;
    }
    //输出所有捐款超过10000的姓名和数额，如果没有人满足的则输出none
    cout << "以下是重要捐款人: " << endl;
    for (int i = 0; i < numDonors; i++) {
        if (donors[i].amount > 10000) {
            cout << donors[i].name << " " << donors[i].amount << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "none" << endl;
    }
    //输出其他捐款者的姓名和数额，如果没有人满足则输出none
    cout << "以下的普通捐款人：" << endl;
    count = 0;
    for (int i = 0; i < numDonors; i++) {
        if (donors[i].amount < 10000) {
            cout << donors[i].name << " " << donors[i].amount << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "none" << endl;
    }
    return 0;
}