//
//  acctabc.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/19.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef acctabc_hpp
#define acctabc_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class AcctABC {
private:
    string fullName;
    long acctNum;
    double balance;
protected:
    struct Formatting {
        ios_base::fmtflags flag;
        streamsize pr;
    };
    const string &FullName() const { return fullName; }
    long AcctNum() const { return acctNum; }
    Formatting SetFormat() const;
    void Restore(Formatting &f) const;
public:
    AcctABC(const string &s = "NullBody", long an = -1, double bal = 0.0);
    void Deposit(double amt);
    virtual void WithDraw(double amt) = 0;
    double Balance() const { return balance; }
    virtual void ViewAcct() const = 0;
    virtual ~AcctABC() {}
};

#endif /* acctabc_hpp */
