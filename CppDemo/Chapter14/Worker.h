//
//  Worker.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/3/13.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef Worker_hpp
#define Worker_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Worker {
private:
    string fullname;
    long id;
public:
    Worker() : fullname("no one"), id(0L) {}
    Worker(const string &s, long n) : fullname(s), id(0) {}
    virtual ~Worker() = 0;
    virtual void Set();
    virtual void Show() const;
};

class Waiter : public Worker {
private:
    int panache;
public:
    Waiter() : Worker(), panache(0) {}
    Waiter(const string &s, long n, int p) : Worker(s, n), panache(0) {}
    Waiter(const Worker &w, int p = 0) : Worker(w), panache(0) {}
    void Set();
    void Show() const;
};

class Singer : public Worker {
protected:
    enum {other, wLow, wMedium, wHigh, mLow, mMedium, mHigh};
    enum {Vtypes = 7};
private:
    static char *pv[Vtypes];
    int voice;
public:
    Singer() : Worker(), voice(other) {}
    Singer(const string &s, int n, int v = other) : Worker(s, n), voice(v) {}
    Singer(const Worker &wk, int v = other) : Worker(wk), voice(v) {}
    void Set();
    void Show() const;
};

#endif /* Worker_hpp */
