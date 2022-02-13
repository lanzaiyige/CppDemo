//
//  Cow.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/12.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef Cow_hpp
#define Cow_hpp

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

class Cow {
private:
    char name[20];
    char *hobby;
    double weight;
public:
    Cow();
    Cow(const char *nm, const char *ho, double wt);
    Cow(const Cow &c);
    ~Cow();
    Cow & operator=(const Cow &c);
    void showCow() const;
};

#endif /* Cow_hpp */
