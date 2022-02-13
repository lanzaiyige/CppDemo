//
//  stringbad.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/8.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef stringbad_hpp
#define stringbad_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class StringBad {
private:
    char *str;
    int len;
    static int num_string;
public:
    StringBad(const char *s);
    StringBad(const StringBad &st);
    StringBad();
    ~StringBad();
    friend ostream & operator<<(ostream &os, const StringBad &st);
};

#endif /* stringbad_hpp */
