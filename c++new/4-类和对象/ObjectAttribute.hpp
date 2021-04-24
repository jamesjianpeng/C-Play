//
//  ObjectAttribute.hpp
//  c++new
//
//  Created by 彭涧 on 2021/4/24.
//

#include <iostream>

using namespace std;

class PointF {
    int x, y; // 默认是 private
    public:
        PointF(int x = 0, int y = 0): x(x), y(y) {};
        void set(int a, int b) {
            x = a;
            y = b;
        };
        int getx() {
            return x;
        };
        int gety() {
            return y;
        };
};

int getx (PointF);
int getx (PointF*);
int getx2 (PointF&); // 这个无法使用 getx 进行重载，因为编译器无法区分 int getx (PointF); 通过调用的方式可以发现他们的入参是一样的

void testObjectAttribute ();
