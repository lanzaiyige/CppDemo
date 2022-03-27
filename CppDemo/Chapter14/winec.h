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

typedef std::valarray<int> ArrInt;

class Pairc {
private:
    ArrInt x;
    ArrInt y;
    int size;
public:
    Pairc(const int x1[], const int x2[], int s);
    Pairc(int s);
    ~Pairc() {}
    ArrInt &first() { return x; }
    ArrInt &second() { return y; }
    void SetFirst(const int x1[]);
    void setSecond(const int y1[]);
    int sumFirst();
    int sumSecond();
    virtual void show();
};

class winec :  {
private:
    
public:
    <#member functions#>
};


#endif /* winec_hpp */
