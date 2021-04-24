//
//  memberFunOveloadClass.hpp
//  c++new
//
//  Created by 彭涧 on 2021/4/24.
//

#include <iostream>

using namespace std;

class MyMax {
    private:
        int a, b, c, d;
        int maxi(int, int);
    public:
        void set(int, int, int = 0, int = 0);
        int maxi();
};

void testMax();
