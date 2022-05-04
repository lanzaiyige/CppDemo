//
//  cpmv.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/5/4.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef cpmv_hpp
#define cpmv_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Cmpv {
public:
    struct Info {
        string qcode;
        string zcode;
    };
private:
    Info *pi;
public:
    Cmpv();
    Cmpv(string q, string z);
    Cmpv(const Cmpv &cp);
    Cmpv(Cmpv &&cp);
    ~Cmpv();
    Cmpv &operator=(const Cmpv &cp);
    Cmpv &operator=(Cmpv &cp);
    Cmpv operator+(const Cmpv &obj) const;
    void Display() const;
};

#endif /* cpmv_hpp */
