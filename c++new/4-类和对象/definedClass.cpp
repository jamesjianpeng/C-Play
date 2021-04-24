//
//  definedClass.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/22.
//

#include "definedClass.hpp"
// 类中定义的数据：数据成员
// 类中定义的函数：成员函数
// 类成员局具有一个访问权限：private,public,protected来定义，默认是 private 权限
// 1。 声明类
class Point {
    private:
        int x,y;
    public:
        
    void Setxy(int a, int b);
        
        void Move(int a, int b);

        void Display();
        // 内联函数
        int Getx() {
            return x;
        };
        
        int Gety();
};

// 2. 定义成员函数
void Point::Setxy(int a, int b) {
    x = a;
    y = b;
}

void Point::Move(int a, int b) {
    x = x + a;
    y = y + b;
}

void Point::Display(){
    cout << x << ", " << y << endl;
}

// 使用 inline 关键字定义为内联函数，或者在声明class 时并定义了成员函数也是内联函数
inline int Point::Gety(){
    return y;
}

// 3. 数据成员的赋值
// 对象的初始化，对象在产生时为对象的数据成员指定值
// 对象的赋值，产生对象之后，对数据成员数据的更新

void myPrint (Point);
void myPrint (Point*);

void myPrint (Point a) {
    a.Display();
}
void myPrint (Point *a) {
    a->Display(); // 指针调用成员函数使用 ->
}

void _print () {
    Point A, B;
    A.Setxy(1, 2);
    B = A; // 只是对象（值）的赋值
    A.Display(); // 1，2
    B.Setxy(3, 4);
    myPrint(A); // 1， 2
    myPrint(B); // 3， 4
    cout << " A.Getx(): " << A.Getx() << endl; // 1
    
    cout << endl;
    
    Point AA, BB, *p; // 声明对象，指针
    Point &AAB = AA; // 声明对象 RA, 并引用 AA
    
    AA.Setxy(12, 13);
    BB = AA; // 对象（值）的赋值
    p = &BB; // 类 Point p的指针指向对象 B, p 和 BB 的值会相互影响
    p -> Setxy(121, 131); // 使用p指针重新赋值
    myPrint(p); // 121，131
    myPrint(AA); // 12， 13
    myPrint(BB); // 121， 131
    AAB.Move(122, 132);
    myPrint(AA); // 134， 145
    myPrint(&AA); // 134， 145
}

// 4. 数据封装
// C++ 通过类实现数据封装，即通过指定各个成员的访问权限来实现 

