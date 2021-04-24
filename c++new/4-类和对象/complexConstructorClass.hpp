//
//  complexConstructorClass.hpp
//  c++new
//
//  Created by 彭涧 on 2021/4/24.
//

#include <iostream>
using namespace std;
class PointC {
    private:
        int x, y;
    public:
        // 声明/定义 带有默认值的构造函数
        PointC(int a = 0, int b = 0): x(a), y(b) {
            cout << "PointC Initializing :" << x << " , " << y << endl;
        };
        // 声明 复制构造函数
        PointC(const PointC&);
        // 成员函数
        int getX() {
            return x;
        };
        // 成员函数
        int getY() {
            return y;
        };
        // 成员函数
        void show() {
            cout << "show PointC x = " << x << " y = " << y << endl;
        };
        // 析构函数
        ~PointC(void) {
            cout << "PointC delete.." << x << " , " << y << endl;
        }
};

class PointD {
    private:
        int x, y;
    public:
        // 声明/定义 带有默认值的构造函数
        PointD(int a = 0, int b = 0): x(a), y(b) {
            cout << "PointD Initializing :" << x << " , " << y << endl;
        };
        // 声明 复制构造函数
        PointD(const PointD&);
        // 成员函数
        int getX() {
            return x;
        };
        // 成员函数
        int getY() {
            return y;
        };
        // 成员函数
        void show() {
            cout << "show PointD x = " << x << " y = " << y << endl;
        };
        // 析构函数
        ~PointD(void) {
            cout << "PointD delete.." << x << " , " << y << endl;
        }
};


void testComplexConstructroClass();
void complexDisplay(PointC);
void complexDisplay2(PointC&);
PointC getPointC (int = 0, int = 0);
