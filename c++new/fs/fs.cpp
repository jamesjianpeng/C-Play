//
//  fs.cpp
//  c++new
//
//  Created by 彭涧 on 2021/4/15.
//
#include <fstream>
#include <iostream>
#include "fs.hpp"
using namespace std;

void fs () {
    char data[100];
    ifstream infile1;
    infile1.open("/Users/pengjian/swift/c++new/c++new/fs/file.txt");
    cout << "Reading from the file" << endl;
    // 读出
    infile1 >> data;
    cout << data;
    cout << "\n finish!" << endl;
    infile1.close();
    
    ofstream outfile;
    outfile.open("/Users/pengjian/swift/c++new/c++new/fs/file.txt");
    cout << "Writing to the file" << endl;
    cout << "Enter you name: " << endl;
    cin.getline(data, 100);
    // 写入
    outfile << data << endl;
    outfile.close();
    
    ifstream infile;
    infile.open("/Users/pengjian/swift/c++new/c++new/fs/file.txt");
    cout << "Reading from the file" << endl;
    // 读出
    infile >> data;
    cout << data;
    cout << "\n finish!" << endl;
    infile.close();

    ofstream outfile2;
    
    outfile2.open("/Users/pengjian/swift/c++new/c++new/fs/file.txt");
    cout << "Writing to the file" << endl;
    cout << "Enter you name: " << endl;
    cin.getline(data, 100);
    // 写入
    outfile2 << data << endl;
    outfile2.close();
}
