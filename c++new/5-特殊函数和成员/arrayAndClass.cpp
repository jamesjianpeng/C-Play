//
//  arrayAndClass.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/30.
//

#include "arrayAndClass.hpp"

ArrayAndClass::ArrayAndClass(int a) {
    num = a;
};

ArrayAndClass::ArrayAndClass(int a, double b) {
    num = a;
    f1 = b;
};

double ArrayAndClass::getF() {
    return f1;
};

int ArrayAndClass::GetNum() {
    return num;
};

void testArrayAndClass () {
    int n(2);
    ArrayAndClass one[2] = {2, 4}, *p;
    ArrayAndClass two[2] = {ArrayAndClass(1, 3.2), ArrayAndClass(5,5.9)};
    for (int i = 0; i < n; i++) {
        cout << " one["<< i <<"] " << one[i].GetNum() << endl;
    };
    p = two;
    for (int i = 0; i < n; i++,p++) {
        cout << " two [" << i << "] = " << p -> getF() << ", " << p -> GetNum() << endl;
    }
    
    ArrayAndClass *one1[2] = {new ArrayAndClass(2), new ArrayAndClass(4)};
    ArrayAndClass *two1[2] = {new ArrayAndClass(1, 3.2), new ArrayAndClass(5, 9.5)};
    for (int i = 0; i < 2; i++) {
        cout << " one1[" << i << "] = (" << one1[i] -> GetNum() << ") " << endl;
    }
    for (int i = 0; i < n; i++) {
        cout << " two1[" << i << "] =(" << two1[i] -> GetNum() << ", " << two1[i] -> getF() << ")" << endl;
    }
};
