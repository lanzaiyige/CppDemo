//
//  String.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/10.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "String.h"

int String::num_string = 0;

String::String() {
    len = 0;
    str = new char[1];
    str[0] = '\0';
}

String::String(const char *s) {
    len = int(strlen(s));
    str = new char[len + 1];
    strcpy(str, s);
}

String::String(const String &s) {
    len = (int)strlen(s.str);
    str = new char[len + 1];
    strcpy(str, s.str);
}

String::~String() {
    num_string--;
    delete [] str;
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

String String::operator+(const char *s) {
    String temp;
    temp.len = int(len + strlen(s));
    temp.str = new char[temp.len + 1];
    std::strcat(std::strcpy(temp.str, str), s);
    return temp;
}

String operator+(const String &s1, const String &s2) {
    String temp;
    temp.len = int(strlen(s1.str) + strlen(s2.str));
    temp.str = new char[temp.len + 1];
    std::strcat(std::strcpy(temp.str, s1.str), s2.str);
    return temp;
}

String & String::stringLow() {
    for (int i = 0; i < len; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
            
    return *this;
}

int String::hasCharCount(char s) {
    int res = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == s) {
            res++;
        }
    }
    return res;
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
