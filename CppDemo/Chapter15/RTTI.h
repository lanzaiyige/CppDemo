//
//  RTTI.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/6.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef RTTI_hpp
#define RTTI_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Grand;

Grand *GetOne();

class Grand {
private:
    int hold;
public:
    Grand(int h = 0) : hold(h) {}
    virtual void speak() const {
        cout << "Grand Class!\n";
    }
    virtual int value() const {
        return hold;
    }
};

class Superb : public Grand {
public:
    Superb(int h = 0) : Grand(h) {}
    void speak() const {
        cout << "Superb Class!\n";
    }
    virtual void say() const {
        cout << "This is Superb say method!\n";
    }
};

class Magnificent : public Superb {
private:
    char ch;
public:
    Magnificent(int h = 0, char c = 'A') : Superb(h), ch(c) {}
    void speak() const {
        cout << "Magnificent Class!\n";
    }
    void say() const {
        cout << "This is Magnificent say method!\n";
    }
};



#endif /* RTTI_hpp */
