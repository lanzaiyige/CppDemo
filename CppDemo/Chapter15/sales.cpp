//
//  sales.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/4.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "sales.h"

Sales::bad_index::bad_index(int ix, const string &s) : logic_error(s), bi(ix) {
    
}

Sales::Sales(int yy) {
    year = yy;
    for (int i = 0; i < MONTHS; i++) {
        gross[i] = 0;
    }
}

Sales::Sales(int yy, const double *gr, int n) {
    year = yy;
    int lim = (n < MONTHS) ? n : MONTHS;
    for (int i = 0; i < lim; i++) {
        gross[i] = gr[i];
    }
}

double Sales::operator[](int i) const {
    if (i < 0 || i >= MONTHS) {
        throw bad_index(i);
    }
    return gross[i];
}

double &Sales::operator[](int i) {
    if (i < 0 || i >= MONTHS) {
        throw bad_index(i);
    }
    return gross[i];
}

