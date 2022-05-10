//
//  fowl.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/9.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "fowl.h"
#include <string>
#include <memory>
#include <iostream>

using namespace std;

void test_fowl() {
//    auto_ptr<string> films[5] = {
//        auto_ptr<string> (new string("A")),
//        auto_ptr<string> (new string("B")),
//        auto_ptr<string> (new string("C")),
//        auto_ptr<string> (new string("D")),
//        auto_ptr<string> (new string("E"))
//    };
//    auto_ptr<string> pwin = films[2];
//    cout << "ready for cout" << endl;
//    for (int i = 0; i < 5; i++) {
//        cout << *films[i] << endl;
//    }
}

void test_fowl_shared() {
    shared_ptr<string> films[5] = {
        shared_ptr<string> (new string("A")),
        shared_ptr<string> (new string("B")),
        shared_ptr<string> (new string("C")),
        shared_ptr<string> (new string("D")),
        shared_ptr<string> (new string("E"))
    };
    shared_ptr<string> pwin = films[2];
    cout << "ready for cout" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *films[i] << endl;
    }
}

void test_unique_ptr() {
//    auto w = make_unique<string>();
////    auto w1 = w;
//    auto w1 = std::move(w);
//    printf("xixi");
}
