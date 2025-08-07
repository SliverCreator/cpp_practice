//
// Created by 14412 on 25-8-7.
//

#include <iostream>
using namespace std;

int main() {
    int distance;
    cout << "请输入距离（单位long）：" << endl;
    cin >> distance;
    int yard = distance * 220;
    cout << "转换后的距离为：" << yard << "码" << endl;
    return 0;

}