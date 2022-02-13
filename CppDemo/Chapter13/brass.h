//
//  brass.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/13.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef brass_hpp
#define brass_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Brass {
private:
    string fullName;
    long acctNum;
    double balance;
public:
    Brass(const string &s = "NullBody", long an = -1, double bal = 0.0);
    void Desposit(double amt);
    virtual void Withdraw(double amt);
    double Balance() const;
    virtual void ViewAcct() const;
    virtual ~Brass() {}
};

class BrassPlus : public Brass {
private:
    double maxLoan;
    double rate;
    double oweBank;
public:
    BrassPlus(const string &s = "NullBody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11);
};

#endif /* brass_hpp */
