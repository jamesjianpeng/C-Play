//
//  constructorNewClass.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/24.
//

#include "constructorNewClass.hpp"

// 1. 构造函数和运算符new
// 运算符 new 用于建立生存期可控的对象，new 返回这个对象的指针
// 使用 new 建立的动态对象只能用 delete 删除，以便释放所占空间

class PointP {
    private:
        int x, y;
    public:
        PointP();
        PointP(int a, int b): x(a), y(b) {
            cout << "init Point has params " << a << "," << b << endl;
        };
        void display () {
            cout << x << "," << y << endl;
        }
};

PointP::PointP(): x(0),y(0) {
    cout << " int Point " << x << "," << y << endl;
};

void testConstructorNew () {
    PointP *p1 = new PointP();
    PointP *p2 = new PointP(5,7);
    delete p1;
    delete p2;
}
