//
//  constructorDefaultValueClass.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/24.
//

#include "constructorDefaultValueClass.hpp"

// 1. 构造函数使用默认参数
// 2. 复制构造函数
// 3. 析构函数
// 构造型成员函数的基本成员：构造函数，复制构造函数，析构函数

class PointB {
    private:
        int x, y;
    public:
        PointB (int = 0, int = 0); // 声明两个参会均为默认参数
        PointB (const PointB&);// 复制构造函数的声明
        ~PointB(); // 析构函数的声明
        // ~PointB(void);
};

PointB::PointB(int a, int b):x(a), y(b) {
    cout << " int PointB " << a << ", " << b << endl;
}


void testConstructorDefaultValueClass () {
    PointB *G = new PointB[2];
    delete []G; // 遇到 delete 运算符，先执行析构函数，然后再释放对应的内存，删除数组对象，需要知道有多个元素，使用 [] 语法
    
    PointB A;
    PointB B(1, 2);
    PointB C[2];
    
    PointB D(B);
    PointB F(C[0]);
}

// 2. 复制构造函数
// 原型：A::A(A&);
// 原型：A::A(const A&);
PointB::PointB(const PointB &t): x(t.x), y(t.y) {
    cout << " copy t.x = " << t.x << " 修改为 new obj.x = " << x << endl;
    cout << " copy t.y " << t.y << " 修改为 new obj.y = " << y << endl;
}

// 3. 析构函数
// 原型：~A();
// 原型：~A(void);
// 析构函数在对象的生存期结束时被自动调用
// 在什么时候调用：析构函数的调用发生在程序的最后一条语句之后
// 4. 默认析构函数
// 如果在定义类时没有定义析构函数，C++ 编译器也要为它产生一个函数体为空的默认析构函数
// 例如：A:~A();
PointB::~PointB() {
    cout << "destructor is active" << endl;
}

//int PointB 0, 0
//int PointB 1, 2
//int PointB 0, 0
//int PointB 0, 0
//copy t.x = 1 修改为 new obj.x = 1
//copy t.y 2 修改为 new obj.y = 2
//copy t.x = 0 修改为 new obj.x = 0
//copy t.y 0 修改为 new obj.y = 0
//destructor is active
//destructor is active
//destructor is active
//destructor is active
//destructor is active
//destructor is active

// 4. 析构函数和运算符 delete
// 他们在一起工作时：当使用运算符 delete 删除一个动态对象时，它首先为这个动态对象调用析构函数，然后再释放这个动态对象占用的内存，



