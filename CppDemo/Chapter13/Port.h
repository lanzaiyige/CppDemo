//
//  Port.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/27.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef Port_hpp
#define Port_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Port {
private:
    char *brand;
    char style[20];
    int bottles;
public:
    Port(const char *br = "none", const char *st = "none", int b = 0);
    Port(const Port &p);
    virtual ~Port() { delete [] brand; }
    Port &operator=(const Port &p);
    Port &operator+=(int b);
    Port &operator-=(int b);
    int BottleCount() const { return bottles; }
    virtual void Show() const;
    friend ostream &operator<<(ostream &os, const Port &p);
};

class Vintage : public Port {
private:
    char *nickname;
    int year;
public:
    Vintage();
    Vintage(const char *br, int b, const char *nn, int y);
    Vintage(const Vintage &v);
    ~Vintage() { delete [] nickname; }
    Vintage &operator=(const Vintage &v);
    void Show() const;
    friend ostream &operator<<(ostream &os, const Vintage &v);
};

#endif /* Port_hpp */
