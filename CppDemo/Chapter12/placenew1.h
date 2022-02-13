//
//  placenew1.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/11.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef placenew1_hpp
#define placenew1_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <new>

using namespace std;

const int BUF = 512;
class JustTesting {
private:
    string words;
    int number;
public:
    JustTesting(const string &s = "Just Testing", int n = 0) {
        words = s;
        number = n;
        cout << words << " constructed\n";
    }
    
    ~JustTesting() {
        cout << words << " destroyed\n";
    }
    
    void Show() const {
        cout << words << ", " << number << endl;
    }
};

#endif /* placenew1_hpp */
