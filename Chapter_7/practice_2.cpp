//
// Created by 14412 on 25-8-17.
//
/*编写一个程序，要求用户输入最多10个高尔夫成绩，并将其存
储在一个数组中。程序允许用户提早结束输入，并在一行上显示所有成
绩，然后报告平均成绩。请使用3个数组处理函数来分别进行输入、显
示和计算平均成绩。*/

#include <iostream>
using namespace std;

int inputScores(double arr[], int maxSize);

void displayScores(const double arr[], int size);

double calculateAverage(const double arr[], int size);

int main() {
    double scores[10];
    int actualSize = inputScores(scores, 10);
    if (actualSize > 0) {
        displayScores(scores, actualSize);
        cout << "Average score: " << calculateAverage(scores, actualSize) << endl;
    }
    return 0;
}

int inputScores(double arr[], int maxSize) {
    cout << "Enter golf scores (q to quit):\n";
    int count = 0;
    while (count < maxSize) {
        cout << "Score #" << (count + 1) << ": ";
        if (!(cin >> arr[count])) {
            cin.clear();
            break;
        }
        count++;
    }
    return count;
}

void displayScores(const double arr[], int size) {
    cout << "Scores: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double calculateAverage(const double arr[], int size) {
    if (size == 0) return 0;
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}
