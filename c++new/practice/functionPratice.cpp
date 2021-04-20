//
//  functionPratice.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/20.
//

#include "functionPratice.hpp"

// 题目一：分别用字符和 ASCLL 码形式输入出整数值 65 和 66
void testChar() {
    cout << " 第一题：" << endl;
    int a(53);
    int b(54);
    char _a('A');
    char _b('B');
    
    cout << (char)b << (char)b << " " << (char)b << (char)a << endl;
    cout << (int)_b << " " << (int)_a << endl;
};

// 题目二：编写一个 int 型变量分配 100 个整型量空间的程序
typedef int intArray[100];
void testInt () {
    cout << " 第二题：" << endl;
    intArray r[] = { 10 };
    cout << *r[0] << endl; // 获取 r[0] 的指针，是这个值
    cout << r[0] << endl; // 获取 r[0] 的引用，是地址，如同下面的写法
    cout << &r[0] << endl; // 获取 r[0] 的引用
    
    int intR[100] = {1, 100}; // 在栈中分配
    int *p = new int[100]; // 在堆中分配
    p[0] = 2;
    p[1] = 99;
    cout << "在栈中分配 " << intR[1] << endl;
    cout << "在堆中分配 " << p[1] << endl;
}

template <class T>
T minFun(T a, T b) {
    return a < b ? a : b;
}

// 题目三：编写完整的程序，它读入 15 个 float 值，用指针把它们存放在一个存储块里，然后输出这些值的和以及最小值
void testNum () {
    cout << " 第三题：" << endl;
    int index(15);
    float num[15];
    float min(0);
    float sum(0);
    float temp; // 这个是中转变量，由于题目需要 float 数据，则该变量需要定义成 float
    for (int i= 0; i < index; i++) {
        cout << "请输入第 "<< i + 1 <<" 个 float 类型的数字" << endl;
        cin >> temp;
        num[i] = temp;
        
        if (i <= 0) {
            min = num[i];
        } else {
            min = minFun<float>(min, num[i - 1]);
        }
        
    }
    for (int j(0); j <= index - 1;j++) {
        if (j == index - 1) {
            cout << num[j] << " = ";
        } else {
            cout << num[j] << " + ";
        }
        min = minFun<float>(min, num[ j == 0 ? j : j - 1]);
        sum += num[j];
    }
    cout << sum << endl << "min: " << min << endl;
}

// 题目四：声明数组：int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 }; 先查找 4 的位置，将数组 a 复制给数组 b,  然后将数组 a 的内容反转，再查找 4 的位置，最后分别输出数组 a 和 b 的内容
void testArray () {
    int num(8);
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int b[num];
    int index(3);
    string sa("");
    string sb("");
    cout << "a 数组第个 " << index << " 元素: " << a[index] << endl;
    copy(a, a + num, b);
    reverse(a, a + num);
    cout << "reverse a 数组后，第个 " << index << " 元素: " << a[index] << endl;
    cout << " a[8] = { ";
    for (int i(0);i < num; i++) {
        cout << a[i] << ", ";
    }
    cout << " } " << endl;
    cout << " b[8] = { ";
    for (int i(0);i < num; i++) {
        cout << b[i] << ", ";;
    }
    cout << " } " << endl;
    
}

void functionPratice(){
    testChar();
    testInt();
//    testNum();
    testArray();
};
