//
//  documentSpecification.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/29.
//

#include "documentSpecification.hpp"
// 1 编译指令(不是 C++ 的一部分)
// (1) 嵌入指令（#include）
// 嵌入指令 #include 指示编译器将一个源文件嵌入到带有 #include 指令的源文件中该指令所在的位置处。
// 尖括号或双引号中的文件名可含有路径信息：#include<\user\prog.h>
//

// (2) 宏定义（#define）
// #define 指令定义一个标识符及串，在源程序中每次遇到该标识符时，编译器均用定义的串代替之。
// 该标识符称为宏名，而将替换过程称之为宏替换。形式：#define 宏名 替换正文
// 对需要使用无参数宏的场合，应该尽量使用 const 代替宏定义

// (3) 条件编译指令（#if, #else, #elif, #endif）
// #error 出错信息

// (4) defined 操作符
// 关键字 defined 不是指令，而是一个预处理操作符用于判定一个标识符是否已经被 #define 定义

// (5) 在头文件中使用条件编译
//#if !defined documentSpecification_hpp
//    #define documentSpecification_hpp
//    #include <iostream>
//    using namespace std;
//    #include <stdio.h>
//
//    class TestY {
//            static int x;
//        public:
//            static int y;
//    };
//
//    void testDocumentSpecification();
//
//#endif /* documentSpecification_hpp */

int TestY::x = 10;
int TestY::y = 20;
void testDocumentSpecification(){
    cout << TestY::y << endl;
};
