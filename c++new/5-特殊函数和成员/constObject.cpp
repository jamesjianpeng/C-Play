//
//  constObject.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/30.
//

#include "constObject.hpp"

// 1. const 对象（在类中使用 const 关键字定义数据成员和成员函数或修饰一个对象）
// (1) 常量成员
// 包括：常量数据成员，静态常数据成员和常引用
// a. 静态常数据成员仍保留静态成员特征，需要在类外初始化
// b. 常数据成员和常引用只能通过舒适化列表来获取初值

const int ConstObject::b = 125; // 1-(1)-a. 静态常数据成员在类外初始化 v = 125

ConstObject::ConstObject(int i, int j): x(i), a(j), r(x) { // 1-(1)-b. 常数据成员和常引用只能通过初始化列表来获取初值
}

void ConstObject::show() {
    cout << "int x = " << x << " , static const int a = " << a << " , const int& r = " << r << endl;
}

void ConstObject::display(const double& r) {
    cout << " const double& r " << r << endl;
}

void ConstObject::displayAddress(const double r) {
    cout << " const r " << r << endl;
}

// 2. 常引用作为函数参数
// (1) 使用引用作为函数参数，传送的是地址
// (2) 有时仅希望参数的值提供给函数使用，并不允许函数改变对象的值，可以使用常引用作为参数
// 例如:
// void ConstObject::display(const double& r) {
//    cout << " const double& r " << r << endl;
// }

// 3. 常对象
// 在对象名前使用 const 声明常对象，但声明时必须同时进行初始化，而且不能被更新
// 声明格式：
// 类名 const 对象名(参数表); // 必须初始化
// const 类名 对象名(参数表); // 必须初始化
void ConstObject::setx(int a) {
    x = a;
}

// 4. 常成员函数
// (1) 一个 cosnt 对象可以调用 const 函数，但不能调用 非 const 成员函数
// 声明格式：
// 类型标识符 函数名(参数列表) const
// 类型标识符 类名::函数名(参数列表) const { // 函数体 }
// 类型标识符 函数名(参数列表) const { // 函数体 }
// (2) 在常成员函数里，不能更新对象的数据成员，不能调用该类中没有用 const 修饰的成员函数

void ConstObject::display(const double& r) const {
    cout << "const function const double& r " << r << endl;
}

// 在常成员函数里，不能更新对象的数据成员
//void ConstObject::setx(int a) const {
//    x = a; // Cannot assign to non-static data member within const member function 'setx'
//}

void testConstObject(){
    ConstObject a1(104, 118); // x = 104, a = 118, r = 104
    ConstObject a2(119, 140); // x = 119, a = 140, r = 119
    a1.show(); // x = 104, a = 118, r = 104
    a2.show(); // x = 119, a = 140, r = 119
    a2.display(3.14159); // 3.14159
    a2.displayAddress(3.14159); // 3.14159 ?? 不是地址吗
    
    cout << " ---- 3. 常对象 ---- " << endl;
    ConstObject const c1(99, 100);
    // 下面的写法报错
    // c1.setx(88); // 'this' argument to member function 'setx' has type 'const ConstObject', but function is not marked const
    c1.display(3.11);
};
