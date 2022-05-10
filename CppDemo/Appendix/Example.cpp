//
//  Example.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/5/4.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "Example.h"
#define LEN 10

using namespace std;

void foo(char *) {
    
}
void foo(int) {
    
}

int len_foo() {
    return 2;
}

constexpr int len_foo_constexpr() {
    return 5;
}

void test_example() {
    if (is_same<decltype(NULL), decltype(0)>::value) {
        cout << "NULL == 0" << endl;
    }
    
    foo(0);
//    foo(NULL);
    foo(nullptr);
    
    char arr1[10];
    char arr2[LEN];
    
    int len = 10;
    char arr3[len];
    
    const int len1 = len + 1;
    constexpr int len2 = 1 + 2 + 3;
    
    char arr4[len1];
    char arr5[len_foo() + 5];
    
    vector<int> vec = {1,1,2,3,4};
    
    for (vector<int>::iterator ele = vec.begin(); ele != vec.end(); ele++) {
        cout << *ele << endl;
    }
}
