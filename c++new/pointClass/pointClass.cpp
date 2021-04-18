//
//  main.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/12.
//

#include <iostream>

#include "hello.hpp"

#define    endl '\n'

using namespace std;

class Point {
private:
    double x, y;
public:
    Point(){};
    Point(double a, double b){
        x = a;
        y = b;
    }
    void Setxy (double a, double b) {
        x = a;
        y = b;
    }
    void Display () {
        cout << x << "\t" << y << endl;
    }
};

int displayPoint() {
    Point a;
    Point b(18.5, 10.6);
    a.Setxy(10.6, 18.5);
    a.Display();
    b.Display();
    return 0;
}
