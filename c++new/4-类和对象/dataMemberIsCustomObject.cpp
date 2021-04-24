//
//  dataMemberIsCustomObject.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/24.
//

#include "dataMemberIsCustomObject.hpp"

// 一个对象作为另外一个类的成员

PointG* Rectangle::getLoc() { // 返回指针
    return &Loc; // 获取对象 Loc 的地址
}

void Rectangle::set(int x, int y, int h, int w) {
    Loc.set(x, y);
    H = h;
    W = w;
}

void testDataMemberCustomObject() {
    Rectangle R;
    R.set(10, 2, 25, 20);
    cout << " R.getHeight() = " << R.getHeight() << " , " << " R.getWidth() = " << R.getWidth() << endl;
    PointG *p = R.getLoc();
    cout << " p -> getx() = " << p -> getx() << " , " << " R.gety() = " << p -> gety() << endl;
}
