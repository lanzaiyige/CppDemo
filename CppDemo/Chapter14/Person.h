//
//  Person.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/1.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <ctime>

using namespace std;

class Person {
private:
    string fistname;
    string lastname;
public:
    Person();
    Person(const char *f, const char *l);
    Person(const Person &p);
    virtual ~Person();
    virtual void Show() const = 0;
};

class Gunslinger : virtual public Person {
private:
    double time;
    int count;
public:
    Gunslinger() : Person(), time(0.0), count(0) {}
    Gunslinger(const char *f, const char *l, double t, int c) : Person(f, l), time(t), count(c) {}
    Gunslinger(const Person &p, double t, int c) : Person(p), time(t), count(c) {}
    ~Gunslinger();
    double Draw();
    virtual void Show() const override;
};

class PokerPlayer : virtual public Person {
private:
    int value;
    int index;
public:
    PokerPlayer() : Person(), value(0), index(0) {}
    PokerPlayer(const char *f, const char *l, int v, int i) : Person(f, l), value(0), index(0) {}
    PokerPlayer(const Person &p, int v, int i) : Person(p), value(0), index(0) {}
    ~PokerPlayer();
    virtual void Draw();
    virtual void Show() const override;
};

class BadDude : public Gunslinger, public PokerPlayer {
public:
    BadDude() : Person(), PokerPlayer(), Gunslinger() {}
    
    int Gdraw();
    int Cdraw();
    void Show() const override;
};

#endif /* Person_hpp */
