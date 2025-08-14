//
// Created by 14412 on 2025/8/14.
//
/*完成编程练习6，但从文件中读取所需的信息。该文件的第一项
应为捐款人数，余下的内容应为成对的行。在每一对中，第一行为捐款
人姓名，第二行为捐款数额*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    system("chcp 65001");
    ifstream inFile;
    inFile.open("patron.txt");
    //读取第一行
    if (!inFile.is_open()) {
        cout << "无法打开文件" << endl;
        return 1;
    }

    int numDonors;
    inFile >> numDonors;

    if (inFile.fail()) {
        cout << "读取捐款人数失败" << endl;
        inFile.close();
        return 1;
    }

    cout << "捐款人数: " << numDonors << endl;

    //从第二行开始读取，每两行一对，分别为捐款人姓名和金额
    string *names = new string[numDonors];
    double *donations = new double[numDonors];
    string name;
    double amount;
    int grandPatrons = 0;
    int patrons = 0;

    inFile.ignore(); // 忽略第一行剩余内容
    for (int i = 0; i < numDonors; i++) {
        getline(inFile, name);
        inFile >> amount;
        inFile.ignore(); // 忽略数字后的换行符

        names[i] = name;
        donations[i] = amount;
        cout << "捐款人姓名: " << names[i] << ", 捐款金额: " << donations[i] << endl;

    }

    delete [] names;
    delete [] donations;

    inFile.close();
    return 0;
}
