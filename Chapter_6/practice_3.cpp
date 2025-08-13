//
// Created by 14412 on 25-8-13.
//
/*
*编写一个菜单驱动程序的雏形。该程序显示一个提供4个选项的
菜单——每个选项用一个字母标记。如果用户使用有效选项之外的字母
进行响应，程序将提示用户输入一个有效的字母，直到用户这样做为
止。然后，该程序使用一条switch语句，根据用户的选择执行一个简单
操作。
*/

#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");
    cout << "请输入选项：" << endl;
    cout << "a) A选项" << "   " << "b) B选项" << endl;
    cout << "c) C选项" << "   " << "d) D选项" << endl;
    cout << "请输入选项：（小写字母，a，b，c，d）：";
    char choice;
    cin.get(choice);
    cout << endl;
    //若输入的choice不是abcd中的一个，则重新输入直到检测通过，否则继续执行
    while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
        cout << "请输入选项：（小写字母，a，b，c，d）：";
        cin.get(choice);
        cout << endl;
    }
    // ReSharper disable once CppDefaultCaseNotHandledInSwitchStatement
    switch (choice) {
        case 'a':{
            cout << "你选了A选项" << endl;
            break;
        }
        case 'b': {
            cout << "你选了B选项" << endl;
            break;
        }
        case 'c': {
            cout << "你选了C选项" << endl;
            break;
        }
        case 'd': {
            cout << "你选了D选项" << endl;
            break;
        }
    }
    return 0;
}