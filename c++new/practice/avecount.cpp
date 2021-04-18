//
//  avecount.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/18.
//

#include "avecount.hpp"

void _avecount (myArray& b, int n) {
    double ave(0);
    int count(0);
    for (int j = 0; j < n - 2; j++) {
        ave = ave + b[j];
        if (b[j] < 60) {
            count++;
        }
    }
    b[n - 2] = ave / n -2;
    b[n - 1] = count;
}

void avecount () {
    myArray b = { 60, 65, 66, 62, 70, 64, 62, 71, 61, 52};
    _avecount(b, 12);
    cout << "平均成绩为 " << b[10] << "分 ， 不及格人数有：" << int(b[11]) << "人。" << endl;
}
