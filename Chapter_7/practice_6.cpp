//
// Created by 14412 on 25-8-17.
//
/*编写一个程序，它使用下列函数：
Fill_array( )将一个double数组的名称和长度作为参数。它提示用户
输入double值，并将这些值存储到数组中。当数组被填满或用户输入了
非数字时，输入将停止，并返回实际输入了多少个数字。
Show_array( )将一个double数组的名称和长度作为参数，并显示该
数组的内容。
Reverse-array( )将一个double数组的名称和长度作为参数，并将存
储在数组中的值的顺序反转。
程序将使用这些函数来填充数组，然后显示数组；反转数组，然后
显示数组；反转数组中除第一个和最后一个元素之外的所有元素，然后
显示数组。*/

#include <iostream>
#include <array>
using namespace std;

int Fill_array(double *array, int length);
void Show_array(const double *array, int length);
void Reverse_array(double *array, int length);


int main() {
    system("chcp 65001");
    int length;
    cout << "请输入数组长度：";
    cin >> length;
    double *array = new double[length];
    // 填充并显示原始数组
    int actual_length = Fill_array(array, length);
    Show_array(array, actual_length);

    // 反转整个数组并显示
    cout << "\n反转整个数组：" << endl;
    Reverse_array(array, actual_length);
    Show_array(array, actual_length);

    // 仅反转中间元素（除第一个和最后一个元素外）
    cout << "\n仅反转中间元素：" << endl;
    if (actual_length > 2) {
        Reverse_array(array + 1, actual_length - 2);
    }
    Show_array(array, actual_length);

    delete[] array;
    return 0;
}

int Fill_array(double *array, int length) {
    cout << "请输入数组内容：";
    int i = 0;
    for (i = 0; i < length; i++) {
        if (!(cin >> array[i])) {
            return i;
        }
    }
    return i;
}

void Show_array(const double *array, int length) {
    cout << "数组内容如下：" << endl;
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void Reverse_array(double *array, int length) {
    for (int i = 0; i < length / 2; i++) {
        double temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
}
