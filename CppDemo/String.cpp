//
//  String.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/10.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "String.h"

String::String() {
    len = 0;
    str = new char[1];
    str[0] = '\0';
}

String::String(const String &s) {
    len = (int)strlen(s.str);
    str = new char[len + 1];
    strcpy(str, s.str);
}

bool operator<(const String &s1, const String &s2) {
    return (strcmp(s1.str, s2.str) < 0);
}

bool operator>(const String &s1, const String &s2) {
    return (strcmp(s1.str, s2.str) > 0);
}

bool operator==(const String &s1, const String &s2) {
    return (strcmp(s1.str, s2.str) == 0);
}

char & String::operator[](int i) {
    return str[i];
}

const char & String::operator[](int i) const {
    return str[i];
}

String & String::operator=(const char *s) {
    delete [] str;
    len = (int)std::strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    return *this;
}

String & String::operator=(const String &st) {
    if (this == &st) {
        return *this;
    }
    len = (int)strlen(st.str);
    str = new char[len + 1];
    strcpy(str, st.str);
    return *this;
}

istream & operator>>(istream &is, String &st) {
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is) {
        st = temp;
    }
    while (is && is.get() != '\n') {
        continue;
    }
    return is;
}

ostream & operator<<(ostream &os, const String &st) {
    os << st.str;
    
    return os;
}
