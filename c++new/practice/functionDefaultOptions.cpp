//
//  functionDefaultOptions.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/18.
//

#include "functionDefaultOptions.hpp"

void _practiceDisplay (string s1, string s2, string s3) {
    if (s2 == "" && s2 == "") {
        cout << s1 << endl;
    } else if (s3 == "" && s2 != "") {
        cout << s1 << " , " << s2 << endl;
    } else {
        cout << s1 << " , " << s2 << " , " << s3 << endl;
    }
}

void practiceDisplay () {
    string str1("现在"), str2("过去"), str3("将来");
    _practiceDisplay(str1);
    _practiceDisplay(str1, str2);
    _practiceDisplay(str1, str2, str3);
}

// 函数默认值设置，必传的参数必须在设置默认值的参数前
