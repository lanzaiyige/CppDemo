//
//  str1.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/7.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "str1.h"
#include <iostream>
#include <string>
#include <memory>

using namespace std;

void test_auto_ptr(string &str) {
    unique_ptr<string> ps(new string(str));
    str = *ps;
    return;
}

void test_string() {
    string one("Lottery Winner!");
//    cout << one << endl;
    
    string s1("cobra");
    string s2("coral");
    if (s1 < s2) {
        printf("haha\n");
    } else {
        printf("xixi\n");
    }
    
    if (s1.length() == s1.size()) {
        printf("equal size\n");
    }
}

