//
//  functionOverLoad.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/18.
//

#include "functionOverLoad.hpp"

void maxTest () {
    cout << " double _max(double, double); 调用结果："<< _max(10.0, 9.0) << endl;
    cout << " int _max(int, int); 调用结果："<< _max(10, 80) << endl;
    cout << " char _max(char, char); 调用结果：" << _max('a', 'd') << endl;
}

double _max(double a, double b) {
    return a > b ? a : b;
}

int _max(int a, int b) {
    return a > b ? a : b;
}

char  _max(char a, char b) {
    return a > b ? a : b;
}


