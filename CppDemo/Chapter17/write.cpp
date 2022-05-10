//
//  write.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/17.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "write.h"
#include <fstream>
#include <iostream>

using namespace std;

void output_w() {
    cout.put(65).put(66) << endl;
    int n;
//    cin >> n;
//    cout << hex;
//    cout << n << endl;
    cout.fill('*');
    cout.width(10);
    cout << "123" << endl;
}

const char *filePath = "/Users/tanzhikang/Desktop/json.txt";
void writeFile() {
    ofstream fout(filePath);
    fout << "Dull Data ";
}

void loadFile() {
    ifstream fin(filePath);
    string line;
    getline(fin, line);
    printf("%s\n", line.c_str());
    fin.close();
}
