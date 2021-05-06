//
//  extendsClass.cpp
//  c++new
//
//  Created by 彭涧 on 2021/5/6.
//

#include "extendsClass.hpp"

PointU::PointU(int a, int b) {
    x = a;
    y = b;
    cout << " PointU ... x = " << x << " , y = " << y << endl;
};
void PointU::showxy() {
    cout << " showxy() " << x << ", " << y << endl;
};
PointU::~PointU() {
    cout << " Delete PointU " << endl;
};

RectangleU::RectangleU(int a, int b, int h, int w) : PointU(a, b) {
    H = h;
    W = w;
    cout << " Rectangle ... " << endl;
};

void RectangleU::show() {
    cout << " H = " << H << " , W = " << W << endl;
};

RectangleU::~RectangleU() {
    cout << " Delete Rectangle " << endl;
};

void testExtendsClass(){
    RectangleU r1(3, 4, 5, 6);
    r1.showxy();
    r1.show();
};
