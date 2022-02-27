//
//  CD.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/27.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef CD_hpp
#define CD_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class CD {
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    CD(char *s1, char *s2, int n, double x);
    CD(const CD &cd);
    CD();
    virtual ~CD();
    virtual void Report() const;
    CD &operator=(const CD &cd);
};

class Classic : public CD {
private:
    char mainSongs[50];
public:
    Classic(char *s1, char *s2, int n, double x, char *s);
    Classic(const CD &c, char *s);
    Classic();
    virtual ~Classic();
    virtual void Report() const;
    Classic &operator=(const Classic &cd);
};

#endif /* CD_hpp */
