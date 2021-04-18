//
//  functionReturn.hpp
//  c++new
//
//  Created by 彭涧 on 2021/4/18.
//

#include <iostream>
#include <string>
using namespace std;

int& _functionReturn(int); // 返回引用

float* _functionReturnInput(int& n); // 返回指针

string _functonReturnValue(const int); // 返回对象（值）

inline int isnumber(const char); // 内联函数

void functionReturn();
