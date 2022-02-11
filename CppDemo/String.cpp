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

