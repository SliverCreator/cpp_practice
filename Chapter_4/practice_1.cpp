#include <iostream>
#include <string>
using namespace std;

int main() {
    system("chcp 65001");
    //请输入first name
    string first_name;
    cout << "What is your first name?" << endl;
    getline(cin, first_name);    // 改用getline
    
    //请输入last name
    string last_name;
    cout << "What is your last name?" << endl;
    getline(cin, last_name);     // 改用getline
    
    //请输入应得等级
    string grade;
    cout << "What letter grade did you get?" << endl;
    getline(cin, grade);         // 改用getline
    
    //请输入年龄
    int age;
    cout << "What is your age?" << endl;
    cin >> age;
    
    //输出姓名
    cout << "Name: " << last_name << "," << first_name << endl;
    //输出等级，上调一个字母
    cout << "Grade: " << (char)(grade[0] + 1) << endl;
    //输出年龄
    cout << "Age: " << age << endl;
    
    return 0;
}