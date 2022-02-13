//
//  mytime.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/7.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef mytime_hpp
#define mytime_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    
public:
    Time();
    Time(int h, int min = 0);
    void addMin(int m);
    void addHour(int h);
    void reset(int h = 0, int m = 0);
    Time operator+(const Time &t) const;
    Time operator-(const Time &t) const;
    Time operator*(double t) const;
    void show() const;
    
    friend Time operator+(const Time &t1, const Time &t2);
    friend Time operator*(double m, const Time &t);
    
    friend ostream &operator<<(ostream &os, const Time &t);
};

#endif /* mytime_hpp */
