//
//  score.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/15.
//

#include <iostream>
#include <fstream>
#include "fs.hpp"

using namespace std;

void computeScore () {
    char name[100];
    char no[5];
    char score[4];
    ofstream outfile;
    outfile.open("/Users/pengjian/swift/c++new/c++new/fs/file.txt", ios::app | ios::out);
    
    cout << "请输入名字" << endl;
    cin.getline(name, 100);
    outfile << name;
    
    cout << "请输入学号" << endl;
    cin.getline(no, 5);
    outfile << " " << no;
    
    cout << "请输入分数" << endl;
    cin.getline(score, 4);
    outfile << " " << score << "\n";
    
    outfile.close();
}
// ios::app 最佳模式，所有写入都追加到文件末尾
// ios::out 打开文件用于写入
