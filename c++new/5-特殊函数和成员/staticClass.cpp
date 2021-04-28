//
//  staticClass.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/28.
//

#include "staticClass.hpp"

int TestA::x = 25; // 初始化静态成员
int TestA::y = 300; // 初始化静态成员
int TestA::show() {
    return y;
}
// 1. 静态成员
// (1) 简单成员函数：指声明中不含 const, volatile, static 关键字的函数
// (2) 静态数据成员或静态成员函数：如果类的数据成员或成员函数使用关键字 static 进行修饰
// (3) 注意：静态数据成员只能声明一次（在类中声明）。初始化时，必须使用成员名限定：
//     例如：int Test::y = 25;
//     例如：Test(int a , int b){ Test::x = a;n = b };
// (4) 注意：除了静态数据成员的初始化之外，静态成员遵循类的其他成员所遵循的访问限制。
//     例如：私有静态数据成员是被 private 进行修饰只有在初始化外可以在类体外使用，修改只能通过公有的成员函数进行操作
//
// (5) 注意：由于 static 不是函数类型中的一部分，所以在类声明之外定义静态成员函数时，不使用 static
// (6) 注意：一般来说，通过类成员名限定访问静态成员，比使用对象名访问静态成员要好，因为静态成员时类的成员而不是对象的成员
// (7) 注意：类中的任何成员函数都可以访问静态成员。因为静态成员函数没有指针，所以静态成员函数只能通过对象名（或指向对象名的指针）访问该对象的非静态成员。

// 2. 静态成员函数与一般成员函数有如下不同：
// (1) 可以不指向某个具体的对象，只与类名连用。
// (2) 在没有建立对象之前，静态成员就已经存在
// (3) 静态成员时类的成员，不是对象的成员
// (4) 静态成员为该类的所有对象共享，它们被存储于一个公用内存中
// (5) 没有 this 指针，所以除非显式地把指针传给它们，否则不能存取类的数据成员
// (6) 静态成员函数不能被说明为虚函数
// (7) 静态成员函数不能直接访问非静态函数

// 3. 静态对象
// (1) 构造函数在代码执行过程中，第一次遇到它的变量定义时被调用，但直到整个程序结束之前仅调用一次
// (2) 析构函数在整个程序退出之前被调用，同样也只调用一次
TestB::TestB(int i): n(i) {
    cout << " TestB constructor: " << n << endl;
}
TestB::~TestB() {
    cout << "TestB desconstructor: " << n << endl;
}
int TestB::getn() {
    return n;
}
void TestB::inc () {
    ++n;
}

void testStaticClass() {

    cout << TestA::func(); // 25
    
    TestA b, c;
    b.sfunc(b, 58); // 设置对象 b 的数据成员 n = 58
    // cout << " x " << TestA::x << endl;
    cout << " y " << TestA::y << " TestA::show = " << TestA::show() << endl; // 300
    cout << " b.getn() = " << b.getn() << endl; // 58
    cout << " b.func() = " << b.func() << endl; // 25
    cout << " c.func() = " << c.func() << endl; // 25
    
    TestA a(24, 56);
    cout << " a.func() = " << a.func() << endl; // 24
    cout << " b.func() = " << b.func() << endl; // 24
    cout << " b.func() = " << b.func() << endl; // 24
    
    cout << " ===== hr ===== " << endl;
    for (int i = 0; i < 3; i++) {
        static TestB A(3 + i);
        TestB B(30 + i);
        A.inc();
        B.inc();
        cout << " A.n = " << A.getn() << endl;
        cout << " B.n = " << B.getn() << endl;
    }
};

//===== hr =====
//TestB constructor: 3     // 初始化 static A 对象
//TestB constructor: 30    // 初始化 B 对象
//A.n = 4                  // static A.n 累加后输出
//B.n = 31                 // B.n 累加后输出
//TestB desconstructor: 31 // B 对象是局部变量，在 for {} 内，执行一次就要销毁，调用析构函数
//TestB constructor: 31    // 初始化 B 对象
//A.n = 5                  // static A.n 累加后输出
//B.n = 32                 // B.n 累加后输出
//TestB desconstructor: 32 // B 对象是局部变量，在 for {} 内，执行一次就要销毁，调用析构函数
//TestB constructor: 32    // 同上的逻辑
//A.n = 6
//B.n = 33
//TestB desconstructor: 33
//TestB desconstructor: 6

