//
//  Stock00.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/1/24.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef Stock00_hpp
#define Stock00_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Stock {
private:
    string company;
    long shares;
    double share_val;
    double total_val;
    void set_total() {
        total_val = shares * share_val;
    }
public:
    Stock();
    Stock(const std::string &co);
    Stock(const std::string &co, double pri);
    ~Stock();
    void acquire(const string &co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock &topVal(const Stock &s) const;
};

#endif /* Stock00_hpp */
