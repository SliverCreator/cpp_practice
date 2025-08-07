//
// Created by 14412 on 25-8-7.
//

#include <iostream>
using namespace std;

void print_one();
void print_two();

int main() {
    print_one();
    print_one();
    print_two();
    print_two();
}

void print_one() {
    cout << "Three blind mice" << endl;
}

void print_two() {
    cout << "See how they run" << endl;
}