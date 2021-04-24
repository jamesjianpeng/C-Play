//
//  ObjectAttribute.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/24.
//

#include "ObjectAttribute.hpp"

// 对象的一些基本特性
// 1. 同一类的对象之间可以相互赋值
// 例如：Point a(1,2); Point b = a;

// 2. 可以使用对象数组
// 例如：Point a[2];

// 3. 可以使用指向对象的指针，使用取地址运算符 & 将一个对象的地址置于该指针中
// 例如：Point A(1,2);Point *p = &A; p -> getx();
// 值得注意的是，指向对象的指针不能取数据成员的地址，也不能取成员函数的地址

// 4. 对象可以用作函数参数

// 5. 对象作为函数参数时，可以使用对象，对象引用和对象指针。
// 例如：void print(Point a){ a.display() } 对象作为参数
// void print(Point &a) { a.display() } 对象引用作为参数
// void print(Point *a) { a -> display() } 对象指针作为参数
// 值得注意的是，函数重载不能同时采用如上 3 中同名函数，因为使用参数为对象和对象引用时，编译系统无法区别这两个函数

// 6. 一个对象可以用做另一个类的成员

int getx (PointF f) {
    return f.getx();
}

int getx (PointF *f) {
    return f -> getx();
}

int getx2 (PointF &f) {
    return f.getx();
}
void testObjectAttribute () {
    PointF f(1,2);
    cout << getx(f) << endl;
    cout << getx(&f) << endl;
    cout << getx2(f) << endl;
}
