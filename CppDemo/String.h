//
//  String.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/10.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef String_hpp
#define String_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class String {
private:
    int len;
    char *str;
    int num_string;
public:
    String();
    String(const String &s);
    ~String();
    friend ostream & operator<<(const ostream &os, const String &s);
    
    int length() const { return len; }
    friend bool operator<(const String &s1, const String &s2);
    friend bool operator>(const String &s1, const String &s2);
    friend bool operator==(const String &s1, const String &s2);
    friend istream & operator>>(istream &is, String &st);
    char & operator[](int i);
    const char &operator[](int i) const;
    static int HowMany();
};

#endif /* String_hpp */
