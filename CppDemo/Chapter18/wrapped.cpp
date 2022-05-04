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

double up(double x) {
    return 2.0 * x;
}

void r1(const double &x) {
    cout << "const double &x\n";
}

//void r1(double &x) {
//    cout << "double &x\n";
//}

void r1(double &&x) {
    cout << "double &&x\n";
}

//void r2(double &x) {
//    cout << x << endl;
//}

//void r3(double &&x) {
//    cout << x << endl;
//}

template<typename T>
void show2(double x, T& fp) {
    cout << x << "->" << fp(x) << "\n";
}

void test_exercise2() {
    double w = 10.0;
//    r1(w);
//    r1(w + 1);
//    r1(up(w));
//    r2(w);
//    r2(w + 1);
//    r2(up(w));
//    r3(w);
//    r3(w + 1);
//    r3(up(w));
    
//    r1(w);
//    r1(w + 1);
//    r1(up(w));
    
    function<double(double)> f1 = [](double x) {
        return 1.8 * x + 32;
    };
    
    show2(10.0, f1);
}
