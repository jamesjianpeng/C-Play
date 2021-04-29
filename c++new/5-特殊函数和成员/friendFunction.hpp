//
//  friendFunction.hpp
//  c++new
//
//  Created by 彭涧 on 2021/4/29.
//

#include <iostream>
#include <cmath>
using namespace std;

// 1. 类本身的友元函数

class PointJ {
    private:
        double X, Y;
    public:
        PointJ(double xi, double yi);
        double getX();
        double getY();
        friend double distance(PointJ&, PointJ&); // 声明友元函数
};

// 将成员函数用做友元
class PointM;
class PointN {
    private:
        int n;
    public:
        PointN(int);
        void set(int);
        int getn();
        void usePointM(PointM&); // 声明本类的成员函数，参数为 Two 类的引用
};
class PointM {
    private:
        int m;
    public:
        PointM(int);
        void set(int);
        int getm();
        friend void PointN::usePointM(PointM&); // 声明类 PointN 的函数为友元函数
};

// 3. 将一个类说明为另一个类的友元
// 此时，整个类的成员函数均具有友元函数的能力
class PointG;
class PointK {
        int k;
    public:
        friend class PointG;
};
class PointG {
        int g;
    public:
        PointG(int, PointK&, int);
        void display(PointK&);
};

void testFriendFunction();

