//
//  complexConstructorClass.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/24.
//

#include "complexConstructorClass.hpp"

// 结论：调用构造函数和析构函数时按相反的顺序执行
// 函数参数使用对象的引用不产生副本，推荐使用引用

// 复制构造函数
PointC::PointC(const PointC& b) {
    x = b.x;
    y = b.y;
    cout << "PointC Copy Initializing: " << x << " , " << y << endl;
}

PointD::PointD(const PointD& b) {
    x = b.x;
    y = b.y;
    cout << "PointD Copy Initializing: " << x << " , " << y << endl;
}

void complexDisplay (PointC p) {
    p.show();
}

void complexDisplay2 (PointC &p) {
    p.show();
}

void complexDisplay (PointD p) {
    p.show();
}

void complexDisplay2 (PointD &p) {
    p.show();
}

PointC getPointC(int a, int b){
    PointC A(a, b);
    return A;
}

void testComplexConstructroClass() {
    PointC A(42,35); // 产生 A 对象
                   // 第一次调用复制构造函数
    PointC B(A);   // (1) 用 A 初始化 B
    PointC C(58, 94); // 产生 C 对象
    PointD D(10, 10);
    
    cout << " ---- called complesDisplay(A) ---- " << endl;
    complexDisplay(D); // 对象 B 作为参数
    cout << " ---- Next ... ----" << endl;
    complexDisplay2(D);
    
    cout << " ---- call G = getPointC() ---- " << endl;
    C = getPointC(1001, 1001);
    complexDisplay2(C);
    cout << " ---- over ----" << endl;
}
