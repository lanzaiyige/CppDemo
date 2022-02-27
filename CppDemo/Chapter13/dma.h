//
//  dma.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/26.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef dma_hpp
#define dma_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class baseDMA {
private:
    char *label;
    int rating;
public:
    baseDMA(const char *l = "null", int r = 0);
    baseDMA(const baseDMA &b);
    virtual ~baseDMA();
    baseDMA &operator=(const baseDMA &b);
    friend ostream &operator<<(ostream &os, const baseDMA &b);
};

class lacksDMA : public baseDMA {
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
public:
    lacksDMA(const char *c = "blank", const char *l = "null", int r = 0);
    lacksDMA(const char *c, const baseDMA &b);
    friend ostream &operator<<(ostream &os, const lacksDMA &l);
};

class hasDMA : public baseDMA {
private:
    char *style;
public:
    hasDMA(const char *s = "none", const char *l = "null", int r = 0);
    hasDMA(const char *s, const baseDMA &b);
    hasDMA(const hasDMA &h);
    ~hasDMA();
    hasDMA &operator=(const hasDMA &h);
    friend ostream &operator<<(ostream &os, const hasDMA &l);
};


#endif /* dma_hpp */
