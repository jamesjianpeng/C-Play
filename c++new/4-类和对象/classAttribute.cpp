//
//  classAttribute.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/25.
//

#include "classAttribute.hpp"

// 类的性质
// 1. 使用类的权限
// (1) 类本身的成员函数可以使用类的所有成员（私有和成员）
// (2) 类的对象只能访问公有成员函数
// (3) 其他函数不能使用类的私有成员，也不能使用公有成员函数，它们只能通过类的对象使用类的公有成员函数
// (4) 虽然一个类可以包含另一个类的对象，但这个类也只能通过被包含类的对象使用那个类的成员函数，通过成员函数使用数据成员

// 2. 不完全的类声明
// (1) 类不是内存中的物理实体，只能当使用类产生对象时，才进行内存分配，这种对象建立的过程称为实例化
// (1) 类必须在其成员使用之前先进行声明
// 例如
// 不完全声明的类不能实例化，否则会出现编译错误

// 3. 空类

// 4. 类作用域， {} 内

class MembersOnly;  // 不完全的类声明
MembersOnly *club;

// 定义1， 若使用定义2 的位置，函数 testClassAttribut 中的编译有问题
class MembersOnly {
    int a,b;
    public:
        void setData (int a, int b) {
            a = a;
            b = b;
        };
        void getA() {
            cout << a << endl;
//            return a;
        };
};


void testClassAttribute (){
    club -> setData(1, 2);
    club -> getA() ;
}

// 定义2， 若使用定义2 的位置，函数 testClassAttribut 中的编译就会报错
//class MembersOnly {
//    int a,b;
//    public:
//        void setData (int a, int b) {
//            a = a;
//            b = b;
//        };
//        int getA() {
//            return a;
//        };
//};
