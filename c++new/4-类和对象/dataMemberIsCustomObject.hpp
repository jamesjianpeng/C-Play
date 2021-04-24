//
//  dataMemberIsCustomObject.hpp
//  c++new
//
//  Created by 彭涧 on 2021/4/24.
//

#include <iostream>

using namespace std;

class PointG {
    int x, y; // 默认是 private
    public:
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

class Rectangle {
    PointG Loc;
    int H, W;
    public:
    void set(int x, int y, int h, int w);
    PointG* getLoc();
    int getHeight () {
        return H;
    }
    int getWidth () {
        return W;
    }
};

void testDataMemberCustomObject();
