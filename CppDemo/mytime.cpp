//
//  mytime.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/7.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "mytime.h"

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int min) {
    hours = h;
    minutes = min;
}

void Time::addMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::addHour(int h) {
    hours += h;
}

void Time::reset(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::show() const {
    std::cout <<  hours << "h" << minutes << "min" << std::endl;
}

Time Time::operator+(const Time &t) const {
    Time sum;
    
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    
    return sum;
}

Time Time::operator-(const Time &t) const {
    int min1 = hours * 60 + minutes;
    int min2 = t.hours * 60 + t.minutes;
    
    Time diff;
    diff.minutes = (min1 - min2) % 60;
    diff.hours = (min1 - min2) / 60;
    
    return diff;
}

Time Time::operator*(double t) const {
    Time res;
    int tm = hours * 60 * t + minutes * t;
    res.hours = tm / 60;
    res.minutes = tm % 60;
    return tm;
}

Time operator*(double m, const Time &t) {
    Time res;
    int tm = t.hours * 60 * m + t.minutes * m;
    res.hours = tm / 60;
    res.minutes = tm % 60;
    return res;
}

ostream &operator<<(ostream &os, const Time &t) {
    os << t.hours << "h" << t.minutes << "min";
    return os;
}
