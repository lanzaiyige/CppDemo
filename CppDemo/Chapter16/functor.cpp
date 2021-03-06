//
//  functor.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/10.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "functor.h"
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

void output(int n) { cout << n << " "; }

template <class T>
class TooBig {
private:
    T cutoff;
public:
    TooBig(const T &t) : cutoff(t) {}
    bool operator()(const T &v) { return v > cutoff;}
    
};

void test_functor() {
    TooBig<int> f100(100);
    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    list<int> yadayada(vals, vals + 10);
    list<int> etcetera(vals, vals + 10);
    cout << "Origin lists:\n";
    for_each(yadayada.begin(), yadayada.end(), output);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), output);
    cout << endl;
    
    yadayada.remove_if(f100);
    etcetera.remove_if(TooBig<int>(200));
    
    for_each(yadayada.begin(), yadayada.end(), output);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), output);
    cout << endl;
}

double sqrr(double num) {
    return sqrt(num);
}

void test_transform_func() {
    const int LIM = 5;
    double arr[LIM] = {36, 39, 42, 45, 48};
    vector<double> gr8(arr, arr + LIM);
    ostream_iterator<double, char> out(cout, " \t");
    transform(gr8.begin(), gr8.end(), out, sqrr);
}
