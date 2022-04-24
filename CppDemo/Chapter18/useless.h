//
//  useless.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/21.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef useless_hpp
#define useless_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Useless {
private:
    int n;
    char *pc;
    static int ct;
    void ShowObject() const;
public:
    Useless();
    explicit Useless(int k);
    Useless(int k, char ch);
    Useless(const Useless &u);
    Useless(Useless &&u);
    ~Useless();
    Useless operator+(const Useless &u) const;
    Useless &operator=(const Useless &u);
    Useless &operator=(Useless &&u);
    void ShowData() const;
};

#endif /* useless_hpp */
