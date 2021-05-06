//
//  functionObject.cpp
//  c++new
//
//  Created by 彭涧 on 2021/5/3.
//

#include "functionObject.hpp"

TestFunction::TestFunction(int a) {
    val = a;
}

int TestFunction::value(int a) {
    val += a;
    return val;
}

// 1. 指向类成员函数的指针
// 声明格式如下：数据类型 (类名::*变量名)(参数列表)
// 定义格式：变量名 = &类名::函数名

void testTestFunction () {
    int(TestFunction::*pfun)(int); // 声明指向类 TestFunction 的成员函数的指针
    pfun = &TestFunction::value; // P118 书上的例子这行少了 “&” 指针指向具体成员函数 value,
    TestFunction obj(10);
    cout << (obj.*pfun)(15) << endl;
    TestFunction *pc = &obj;
    cout << (pc->*pfun)(20) << endl;
}
