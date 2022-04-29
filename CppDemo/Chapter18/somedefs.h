//
//  somedefs.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/29.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef somedefs_hpp
#define somedefs_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

template <typename T, typename F>
T use_f(T v, F f) {
    static int count = 0;
    count++;
    cout << "use_f count = " << count << &count << endl;
    return f(v);
}

class Fp {
private:
    double z_;
public:
    Fp(double z = 1.0) : z_(z) { }
    double operator() (double p) {
        return z_ * p;
    }
};

class Fq {
private:
    double z_;
public:
    Fq(double z = 1.0) : z_(z) { }
    double operator() (double q) {
        return z_ + q;
    }
};

#endif /* somedefs_hpp */
