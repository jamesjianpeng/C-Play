//
//  functionConstOptions.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/18.
//

#include "functionConstOptions.hpp"

void _change (const string& s) {
    // 下面的注释的写法会报错
    // s = s + " No!"; // No viable overloaded '='
    cout << s << endl;
}

void change() {
    string str("Can you change is?");
    _change(str);
    cout << " 结果： " << str << endl;
}

// 使用 const 保护数据，通知函数只能使用，无权修改它
