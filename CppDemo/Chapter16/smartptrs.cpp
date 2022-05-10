//
//  smartptrs.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/9.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "smartptrs.h"
#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Report {
private:
    string str;
public:
    Report(const string &s) : str(s) {
        cout << "Object create" << endl;
    }
    ~Report() {
        cout << "Object destory" << endl;
    }
    void comment() const {
        cout << str << endl;
    }
};

void test_smart_ptr() {
    {
//        auto_ptr<Report> ps(new Report("this is auto ptr"));
//        ps->comment();
    }
    
    {
        shared_ptr<Report> ps(new Report("this is shared ptr"));
        ps->comment();
    }
    
    {
        unique_ptr<Report> ps(new Report("this is unique ptr"));
        ps->comment();
    }
}

unique_ptr<string> demo(const char *s) {
    unique_ptr<string> temp(new string(s));
    return temp;
}

void test_unique_ptr_assign() {
    unique_ptr<string> ps;
    ps = demo("Unique test");
}

void test_complie_error() {
    unique_ptr<string> pu1(new string("hello"));
    unique_ptr<string> pu2;
//    pu2 = pu1;
    unique_ptr<string> pu3;
    pu3 = unique_ptr<string>(new string("xixi")); 
}
