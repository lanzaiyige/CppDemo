//
//  Stock00.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/1/24.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "Stock00.h"
#include <iostream>

void Stock::acquire(const string &co, long n, double pr) {
    company = co;
    if (n < 0) {
        shares = 0;
    } else {
        shares = n;
    }
    share_val = pr;
    set_total();
}

void Stock::buy(long num, double price) {
    if (num < 0) {
        std::cout << "not validate" << endl;
    } else {
        shares += num;
        share_val = price;
        set_total();
    }
}

void Stock::sell(long num, double price) {
    if (num < 0) {
        std::cout << "not validate" << endl;
    } else if (num > shares) {
        std::cout << "can't sell" << endl;
    } else {
        shares -= num;
        share_val = price;
        set_total();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_total();
}

Stock::Stock() {
    company = "Default";
    share_val = 0.0;
    shares = 0;
    total_val = 0.0;
}

Stock::Stock(const std::string &co) {
    company = co;
}

Stock::Stock(const std::string &co, double pri) {
    company = co;
    total_val = pri;
}

Stock::Stock(const char *co, double pri) {
    companyName = new char[strlen(co) + 1];
    strcpy(companyName, co);
}

ostream & operator<<(ostream &os, const Stock &st) {
    os << st.companyName << endl;
    return os;
}

void Stock::show() const {
    printf("%s,%f\n", company.c_str(), total_val);
}

const Stock & Stock::topVal(const Stock &s) const {
    if (s.total_val > total_val) {
        return s;
    } else {
        return *this;
    }
}

Stock::~Stock() {
    
}
