//
//  constructorClass.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/24.
//

#include "constructorClass.hpp"

// 问题一：为什么需要构造函数
// 建立一个对象时，对象的状态（数据成员的取值）是不确定的，为了使对象的状态确定，必须对其进行正确的初始化

// 1 默认构造函数
// C++ 编译器总是自定建立一个不带参数的构造函数

class Point {
    private:
        int x, y;
    public:
        Point(); // 若没有这个和 class 类名同名的函数，C++ 就会自定建立一个不带参数的构造函数
        Point(int, int);
        void display ();
};

// 2. 定义构造函数
// 2.1 构造函数的定义和使用
// 类体里的声明形式：
// 类名 (形参1, 形参2, ...形参n);
// 类体外的声明形式
// 类名:: 类名(形参1, 形参2, ...形参n): x1(形参1),x2(形参2),x3(形参3){}
// 类名:: 类名(形参1, 形参2, ...形参n) {
//   x1 = 形参1;
//   x2 = 形参2;
//   ......
//   xn = 形参n;
// }
//
// 2.2 自动调用构造函数
// 程序员不能载程序中显式地调用构造函数，构造函数是自动调用的
// 产生对象之后，也不能通过调用构造函数修改初始化的值

Point::Point():x(0),y(0) { // : x(0),y(0); 相当于 x = 0; y = 0;
    cout << "init Point" << endl;
}

// 和上面写法功能一致
//Point::Point() {
//    x = 0;
//    y = 0;
//    cout << "init Point" << endl;
//}

Point::Point(int a, int b): x(a), y(b) {
    cout << "int Point " << a << "," << b << endl;
}

void Point::display() {
    cout << x << ", " << y << endl;
}

void testConstructor () {
    Point A;
    Point B(1, 2);
    Point C[2];
    Point D[2] = { Point(2, 3), Point(3, 4) };
    D[1].display();
}

//init Point
//int Point 1,2
//init Point
//init Point
//int Point 2,3
//int Point 3,4
//3, 4

//
