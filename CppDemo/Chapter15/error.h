//
//  error.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/4.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef error_hpp
#define error_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class bad_hmean {
private:
    double v1,v2;
public:
    bad_hmean(int a = 0, int b = 0) : v1(a), v2(b) {}
    void message();
};

inline void bad_hmean::message() {
    cout << "hmean(" << v1 << ", " << v2 << "): " << "invalid arguments.";
}

class error {
private:
    double x,y;
public:
    error(double a, double b);
    double hmean();
    double hmean1();
    ~error() { }
};

#endif /* error_hpp */
