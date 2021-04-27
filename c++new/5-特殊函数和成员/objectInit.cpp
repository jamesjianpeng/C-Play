//
//  objectInit.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/27.
//

#include "objectInit.hpp"

ContainerZ::ContainerZ(int a, int b, int c): two(a), one(b) {
    data = c;
    cout << " ContainerZ init " << data << endl;
}

// 5. 当初始化 const 成员和引用成员时，必须通过成员初始化列表进行

class Example {
    private:
        const int num;
        int &ret;
    public:
        Example(int n, int f): num(n), ret(f) {
            cout << f << endl;
            cout << ret << endl;
            cout << &ret << endl;
        };
        void setData (int n, int f) {
//            num = n; // 报错： Cannot assign to non-static data member 'num' with const-qualified type 'const int'
            ret = f;
        }
        void show () {
            cout << num << " " << &ret  << " ,, " << ret << endl;
        }
};

void testObjectInit() {
    Example e(99, 88);
    e.show();
    cout << "test 33" << endl;
    ContainerZ obj, anObj(5, 6, 10);
    cout << "test" << endl;

};

//ObjectA constructor init val 2
//ObjectA constructor init val 1
//ContainerZ default constructor init data0
//ObjectA constructor init val 6
//ObjectA constructor init val 5
// ContainerZ init 10
//test
//ContainerZ Destructor for container10
//ObjectA Destructor for object5
//ObjectA Destructor for object6
//ContainerZ Destructor for container0
//ObjectA Destructor for object1
//ObjectA Destructor for object2


