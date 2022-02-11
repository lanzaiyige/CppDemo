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
#include <string>

using namespace std;

class String {
private:
    int len;
    char *str;
    static int num_string;
    static const int CINLIM = 80;
public:
    String();
    String(const String &s);
    ~String();
    friend ostream & operator<<(const ostream &os, const String &s);
    
    int length() const { return len; }
    String & operator=(const char *s);
    String & operator=(const String &st);
    char & operator[](int i);
    const char &operator[](int i) const;
    
    friend bool operator<(const String &s1, const String &s2);
    friend bool operator>(const String &s1, const String &s2);
    friend bool operator==(const String &s1, const String &s2);
    friend istream & operator>>(istream &is, String &st);
    friend ostream & operator<<(ostream &os, const String &st);
    
    static int HowMany() { return num_string; }
};

#endif /* String_hpp */
