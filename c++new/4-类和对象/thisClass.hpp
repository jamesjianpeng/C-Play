//
//  thisClass.hpp
//  c++new
//
//  Created by 彭涧 on 2021/4/24.
//

#include <iostream>

using namespace std;

// this
// 源程序编译后会产生 void show(int, int) 实际上是如下形式：
// void ThisA::show(int a, int b, (ThisA *)this){ cout << " show: this.x " << this -> x << " , " << this -> y << endl; }
// 一般情况下都要省略 this -> ，而让系统进行默认设置
class ThisA {
    private:
        int  x, y;
    public:
    ThisA (int x = 0, int y = 0):x(x), y(y){};
        void show () {
            cout << " show: this.x " << this -> x << " , " << this -> y << endl;
        };
};

void testThisClass();
