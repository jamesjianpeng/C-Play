//
//  constObject.hpp
//  c++new
//
//  Created by 彭涧 on 2021/4/30.
//

#include <iostream>
using namespace std;

class ConstObject {
    private:
        int x;
        const int a;
        static const int b;
        const int& r;
    public:
        ConstObject(int, int);
        void setx(int);
        void setx(int) const;
        void show();
        void display(const double&);
        void display(const double&) const;
        void displayAddress(const double);
};

void testConstObject();
