//
//  objectInit.hpp
//  c++new
//
//  Created by 彭涧 on 2021/4/27.
//

#include <iostream>
using namespace std;

// 对象成员的初始化
// 1. 可以在一个类中说明具有某个类的类型的数据成员，称为数据成员

// 2. 对象成员的声明
//class A {
//    类名1 成员名1;
//    类名2 成员名2;
//    ......
//    类名n 成员名n;
//}

// 3. 对象成员在构造函数中的定义形式
// A::A(参数表0):成员1(参数表1), 成员2(参数表2), 成员n(参数表n){ /** do something */ }

// 4. 对象成员构造函数函数的调用顺序：取决于这些对象成员在类中说明的顺序，与它们在成员初始化列表中国呢给出的顺序无关。
// 例如 建立 A 类对象时，(1) 先调用对象成员的构造函数，初始化对象成员 (2) 然后才执行 A 类的构造函数，初始化 A 对象中的其他成员
// 析构函数的调用顺序与构造函数正好相反


class ObjectZ {
    private:
        int val;
    public:
        ObjectZ():val(0) {
            cout << "ObjectA default constructor init val " << val << endl;
        };
        ObjectZ(int i): val(i) {
            cout << "ObjectA constructor init val " << val << endl;
        };
        ~ObjectZ(){
            cout << "ObjectA Destructor for object" << val << endl;
        }
};
class ContainerZ {
    private:
        ObjectZ one;
        ObjectZ two;
        int data;
    public:
        ContainerZ(): data(0), two(1), one(2) {
            cout << "ContainerZ default constructor init data" << data << endl;
        }
        ContainerZ(int,int,int);
        ~ContainerZ() {
            cout << "ContainerZ Destructor for container" << data << endl;
        }
};

void testObjectInit();



