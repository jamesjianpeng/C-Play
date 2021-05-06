//
//  extendsClass.hpp
//  c++new
//
//  Created by 彭涧 on 2021/5/6.
//

#include <iostream>
using namespace std;
// 继承和派生的基本概念
// 1. 派生：从一个或多个以前定义的类（基类）产生新类的过程称为派，这个新类称为派生类
// 2. 类的继承：指派生类拥有基类的数据成员和成员函数。（继承常用来表示类属关系，不能将继承理解为构成关系）
// 3. 从现有类中派生出新类时，派生类可以有如下几种变化：
// (1) 增加新的成员(数据成员或成员函数)
// (2) 重新定义已有的成员函数
// (3) 改变基类成员的访问权限
// 4. 单一继承的一般形式
// class 派生类名:访问控制 基类名 {
//   private:
//     成员声明列表
//   protected:
//     成员声明列表
//   public:
//     成员声明列表
// }

// 5. 定义派生类的构造函数的一般形式：
// 派生类名:: 派生类名(参数表0): 基类名(参数表) { // 函数体 }
// 6. 注意事项：
// (1) 构造函数（包括析构函数）是不能被继承，所以一个派生类只能调用它的直接基类的构造函数。

class PointU {
    private:
        int x, y;
    public:
        PointU(int, int);
        void showxy();
        ~PointU();
};

class RectangleU: public PointU {
    private:
        int H,W;
    public:
        RectangleU(int, int, int, int);
        void show();
        ~RectangleU();
};

void testExtendsClass();
