//
//  memberFunOveloadClass.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/24.
//

#include "memberFunOveloadClass.hpp"

// 类的成员函数重载和函数的重载一致

int MyMax::maxi(int x, int y) {
    return x > y ? x : y;
}

int MyMax::maxi(){
    int x = maxi(a, b);
    int y = maxi(c, d);
    return maxi(x, y);
}

void MyMax::set(int x1, int x2, int x3, int x4) {
    a = x1;
    b = x2;
    c = x3;
    d = x4;
    cout << " set a = " << a << " , b = " << b << " , c = " << c << " , d = " << d << endl;
}

void testMax () {
    int a(3);
    MyMax A[a];
    A[0].set(12, 45, 76, 89);
    A[1].set(12, 45, 76);
    A[2].set(12, 45);
    for (int i = 0; i < a; i++) {
        cout << " max: " << A[i].maxi() << endl;
    }
}
