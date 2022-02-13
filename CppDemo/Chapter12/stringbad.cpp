//
//  stringbad.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/8.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "stringbad.h"

int StringBad::num_string = 0;

// error example
StringBad::StringBad(const char *s) {
    len = (int)strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    num_string++;
}

StringBad::StringBad(const StringBad &st) {
    num_string++;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
}

StringBad::StringBad() {
    len = 4;
    str = new char[len];
    strcpy(str, "c++");
    num_string++;
}

StringBad::~StringBad() {
    num_string--;
    delete [] str;
}

ostream & operator<<(ostream &os, const StringBad &st) {
    os << st.str;
    return os;
}
