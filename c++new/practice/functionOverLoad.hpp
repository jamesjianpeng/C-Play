//
//  functionOverLoad.hpp
//  c++new
//
//  Created by 彭涧 on 2021/4/18.
//

#include <iostream>
using namespace std;

double _max(double, double);
int _max(int, int);
int _max(int, int, int);
//int _max(int, int = 0, int = 0) // 会报错
char _max(char, char);


void maxTest();
