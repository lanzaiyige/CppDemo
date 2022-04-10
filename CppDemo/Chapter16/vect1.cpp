//
//  vect1.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/10.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "vect1.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

const int NUM = 5;
void test_vector() {
    vector<int> ratings(NUM);
    vector<string> titles(NUM);
    int i;
    for (i = 0; i < NUM; i++) {
        getline(cin, titles[i]);
        cout << "Enter";
        cin >> ratings[i];
        cin.get();
    }
    for (i = 0; i < NUM; i++) {
        cout << ratings[i] << "\t" << titles[i] << endl;
    }
}

double *find_ar(double *ar, int n, const double &val) {
    for (int i = 0; i < n; i++) {
        if (ar[i] == val) {
            return &ar[i];
        }
    }
    return 0;
}

typedef double *iter;
iter find_ar_1(iter ar, int n, const double &val) {
    for (int i = 0; i < n; i++, ar++) {
        if (*ar == val) {
            return ar;
        }
    }
    return 0;
}

iter find_ar_2(iter begin, iter end, const double &val) {
    iter ar;
    for (ar = begin; ar != end; ar++) {
        if (*ar == val) {
            return ar;
        }
    }
    return 0;
}

void ref_param(const double &val) {
    
}

void test_iterator() {
    double dd[5] = {1.0, 2.0, 3.0, 4.0};
    double *d = dd;
    double *dlast = d + 3;
    double last = *(d + 3);
    double *res = find_ar_2(d, dlast, 3.0);
    printf("%f\n", *res);
}
