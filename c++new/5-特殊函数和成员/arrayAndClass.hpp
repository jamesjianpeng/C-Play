//
//  arrayAndClass.hpp
//  c++new
//
//  Created by 彭涧 on 2021/4/30.
//

#include <iostream>
using namespace std;

class ArrayAndClass {
        int num;
        double f1;
    public:
        ArrayAndClass(int);
        ArrayAndClass(int, double);
        int GetNum();
        double getF();
};

void testArrayAndClass();
