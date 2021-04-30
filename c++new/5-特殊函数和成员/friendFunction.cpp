//
//  friendFunction.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/29.
//

#include "friendFunction.hpp"

PointJ::PointJ(double a, double b) {
    X = a;
    Y = b;
}

double PointJ::getX() {
    return X;
}

double PointJ::getY() {
    return Y;
}
// 1. 类本身的友元函数
// (1) 由于友元函数不是 PointJ 类的成员，所以没有 this 指针，在访问该类的对象的成员时，必须使用对象名，而不能直接使用 PointJ 类的成员名
// (2) 友元函数可以在类中声明时定义。如果在类外定义，不能再使用 friend 关键字
double distance (PointJ& a, PointJ& b) { // 像普通函数一样定义友元函数
    double dx = a.X - b.X; // 在友元函数内可以访问对象 a 的私有/公有 数据成员和成员函数
    double dy = a.Y - b.Y;
    return sqrt(dx * dx + dy * dy);
}

// 2. 将成员函数用做友元
PointN::PointN(int a) {
    n = a;
}
void PointN::set(int a) {
    n = a;
}
int PointN::getn() {
    return n;
}
void PointN::usePointM(PointM& M) {
    n = M.getm();
    cout << " PointM private M.m = " << M.m << " PointN private n = " << n << endl;
}

PointM::PointM(int a) {
    m = a;
}
void PointM::set(int a) {
    m = a;
}
int PointM::getm() {
    return m;
}

// 3. 将一个类说明为另一个类的友元
// 当一个类要和另一个类协同工作时，使一个类成为另一个类的友元是很有用的
PointG::PointG(int a, PointK &r, int b){
    g = a;
    r.k = b;
};
void PointG::display(PointK &r) {
    cout << " PointG private g = " << g << " PointK r.k = " << r.k << endl;
}


void testFriendFunction () {
    cout << " ---- 1 类本身的友元函数 ----- " << endl;
    PointJ p1(3.5, 5.5), p2(4.5, 6.5);
    cout << " The distance is " << distance(p1, p2) << endl;
    
    cout << " ---- 2 成员函数用做友元函数 -----" << endl;
    PointN N(5);
    PointM M(8);
    N.usePointM(M);

    cout << " ---- 2 将一个类说明为另一个类的友元 -----" << endl;
    PointK K;
    PointG G(23, K, 55);
    G.display(K);
};

