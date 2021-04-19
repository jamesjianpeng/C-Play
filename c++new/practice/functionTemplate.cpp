//
//  functionTemplate.cpp
//  
//
//  Created by 彭涧 on 2021/4/20.
//

#include "functionTemplate.hpp"

template <class T>
T _maxTemplate(T m1, T m2) {
    return (m1 > m2) ? m1 : m2;
}

void functionTemplate () {
    cout << "max res: " << _maxTemplate(2.0, 5.0) << endl;
    cout << "max res: " << _maxTemplate(4, 2) << endl;
    cout << "max res: " << _maxTemplate("aa", "bb") << endl;
    cout << "max res: " << _maxTemplate('a', 'b') << endl;
}

template <class T>
void printer(complex<T>a) {
    string str1("real is "), str2(", image is ");
    cout << str1 << a.real() << str2 << a.imag() << endl;
}

void functionTemplate2 () {
    complex<float> num1(20.3333, 4.4);
    complex<int> num2(20, 4);
    printer(num1);
    printer(num2);
    cout << "min res: " << min<string>("aa", "bb") << endl;
    cout << "min res: " << min('a', 'b') << endl;
    cout << "min res: " << min<int>(2, 1) << endl;
    cout << "min res: " << min<float>(2.3, 3.3) << endl;
}

template <typename  T>
T min(T m1, T m2) {
    return (m1 < m2) ? m1 : m2;
}
