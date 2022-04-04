//
//  error.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/4.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "error.h"

double error::hmean() {
    if (x == -y) {
        cout << "untenable arguments to hmean()\n";
        abort();
    }
    return 2.0 * x * y / (x + y);
}

double error::hmean1() {
    if (x == -y) {
        throw bad_hmean(x, y);
    }
    return 2.0 * x * y / (x + y);
}

error::error(double a, double b) : x(a),y(b) {
//    double z = hmean();
//    cout << "result is : " << z << endl;
    
    double z;
    try {
        z = hmean1();
    } catch (bad_hmean &bh) {
        bh.message();
    }
    cout << "Bye!" << endl;
}


