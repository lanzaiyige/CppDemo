//
//  winec.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/3/27.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef winec_hpp
#define winec_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <valarray>

using namespace std;

typedef std::valarray<int> ArrayInt;

class Pairc {
private:
    ArrayInt x;
    ArrayInt y;
    int size;
public:
    Pairc(const int x1[], const int x2[], int s);
    Pairc(int s);
    ~Pairc() {}
    ArrayInt &first() { return x; }
    ArrayInt &second() { return y; }
    void SetFirst(const int x1[]);
    void setSecond(const int y1[]);
    int sumFirst();
    int sumSecond();
    virtual void show();
};

class winec : private string, private Pairc {
private:
    int Year;
    int *year;
    int *bottle;
public:
    winec(const char *l, int y, const int yr[], const int bot[]);
    winec(const char *l, int y);
    winec();
    void GetBottles();
    string &Label();
    int sum();
    void Show();
};


#endif /* winec_hpp */
