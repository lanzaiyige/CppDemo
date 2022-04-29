//
//  wrapped.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/29.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "wrapped.h"

using namespace std;

double dub(double x) {
    return 2.0 * x;
}

double square(double x) {
    return x * x;
}

void test_wrapped() {
    double y = 1.21;
    function<double(double)> ef1 = dub;
    function<double(double)> ef2 = [](double u){ return u * u;};
    use_f(y, ef1);
    use_f(y, ef2);
}
