//
//  staticClass.hpp
//  c++new
//
//  Created by 彭涧 on 2021/4/28.
//
#include <iostream>
using namespace std;

class TestA {
        static int x;
        int n;
    public:
        TestA(){};
        TestA(int a, int b) {
            TestA::x = a;
            // 效果同上 x = a;
            n = b;
        };
        static int y;
        static int show ();
        static int func() {
            return x;
        };
        static void sfunc(TestA &r, int a) {
            r.n = a;
        };
        void setx (int a) {
            TestA::x = a;
        }
        int getn() {
            return n;
        };
};

class TestB{
    private:
        int n;
    public:
        TestB(int);
        ~TestB();
        int getn();
        void inc();
};

void testStaticClass();
