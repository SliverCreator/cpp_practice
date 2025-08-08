//
// Created by 14412 on 25-8-8.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string first_name;
    string last_name;
    cout << "Enter your first name: ";
    getline(cin, first_name);
    cout << "Enter your last name: ";
    getline(cin, last_name);
    cout << "Your name is " << last_name << ", " << first_name << endl;
}