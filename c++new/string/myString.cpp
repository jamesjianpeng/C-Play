//
//  stringSwap.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/17.
//
#include <iostream>
#include <string>
#include "myString.hpp"
using namespace std;
void swap (string, string); // 对象（值）作为函数参数
void swap (string *, string *); // 对象指针作为函数参数
void swap (int[]); // 对象指针作为函数参数
void swap1 (string&, string&); // 引用作为函数参数

void stringSwap () {
    string str1("str1"),str2("str2");
    swap(str1, str2);
    cout << " 结果： str1 =" << str1 << " ,str2 = " << str2 << endl;
    
    swap(&str1, &str2);
    cout << " 结果： str1 =" << str1 << " ,str2 = " << str2 << endl;
    
    int a[] = {3, 8};
    swap(a);
    cout << "数组形参 结果 a[0] = " << a[0] << ", a[1] = " << a[1] << endl;
    
    swap1(str1, str2);
    cout << "引用作为函数参数，结果：str1 = " << str1 << ", str2 = " << str2 << endl;
}

void swap (string str1, string str2) {
    string temp = str1;
    str1 = str2;
    str2 = temp;
    cout << "swap 结果：str1 = " << str1 << ", str2 = " << str2 << endl;
}
// 对象（值）作为函数参数，输出结果：
// swap 结果：str1 = str2, str2 = str1
// 结果： str1 =str1 ,str2 = str2


void swap (string * s1, string * s2) {
    string temp = *s1;
    *s1 = *s2;
    *s2 = temp;
    cout << "swap 结果：str1 = " << *s1 << ", str2 = " << *s2 << endl;
}
// 对象指针作为函数参数，输出结果：
// swap 结果：str1 = str2, str2 = str1
// 结果： str1 =str2 ,str2 = str1


void swap (int a[]) {
    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
    cout << "swap 结果： a[0] = " << a[0] << ", a[1] = " << a[1] << endl;
}
// 对象指针作为函数参数，输出结果：
// swap 结果： a[0] = 8, a[1] = 3
// 数组形参 结果 a[0] = 8, a[1] = 3

void swap1 (string &s1, string &s2) {
    string temp = s1;
    s1 = s2;
    s2 = temp;
    cout << "swap1 结果：str1 = " << s1 << ", str2 = " << s2 << endl;
}





