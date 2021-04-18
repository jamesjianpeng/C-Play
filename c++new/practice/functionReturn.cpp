//
//  functionReturn.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/18.
//

#include "functionReturn.hpp"

int a[] = {2, 4, 6, 7, 10};

// 返回引用的函数
// 语法：数据类型& 函数名(参数列表)
int& _functionReturn (int i) {
    return a[i];
}

// 返回指针的函数
// 语法：类型标识符 *函数名(参数列表)
float * _functionReturnInput (int& n) {
    cout << "Input number:";
    cin >> n;
    if (n <= 0) {
        return NULL;
    }
    float * buf = new float[n];
    if (buf == 0) {
        return NULL;
    }
    for (int i =0;i < n;i++) {
        cout << "请输入：" << endl;
        cin >> buf[i];
    }
    return buf;
}

// 返回对象（值）
string _functonReturnValue(const int n) {
    string s1, s2;
    for (int i = 0; i < n; i++) {
        cout << "请输入：" << endl;
        cin >> s1;
        s2 = s2 + s1;
    }
    return s2;
}

// 内联函数
inline int isnumber(const char c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

void functionReturn () {
    int index(1);
    _functionReturn(index)  = 1000;
    cout << "全局 index " << index << " : " << a[index] << " 返回引用的函数，返回：" << _functionReturn(index) << endl;
    
    int n;
    float *data;
    data = _functionReturnInput(n);
    if (data) {
        cout << "结果为：";
        for (int i = 0;i < n;i++){
            cout << data[i] << " ";
        }
        cout << endl;
        delete data;
    }
    
    int no;
    cout << "input no = ";
    cin >> no;
    string str = _functonReturnValue(no);
    cout << "result = " << str << endl;
    
    char c;
    cout << "please entere char" << endl;
    cin >> c;
    if (isnumber(c)) {
        cout << " You entered a digit" << endl;
    } else {
        cout << "You entered a non - digit" << endl;
    }
}



