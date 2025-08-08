//
// Created by 14412 on 25-8-8.
//
#include <iostream>
#include <cstring>
using namespace std;

int main() {
char first_name[10];
char last_name[10];
cout << "Enter your first name: ";
cin.get(first_name, 10).get();
cout << "Enter your last name: ";
cin.get(last_name, 10).get();
cout << "Your name is " << last_name << ", " << first_name << endl;
}
