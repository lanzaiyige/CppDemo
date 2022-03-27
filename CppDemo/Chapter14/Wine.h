//
//  Wine.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/3/24.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef Wine_hpp
#define Wine_hpp

#include <stdio.h>
#include <valarray>
#include <string>
#include <iostream>

template <class T1, class T2>
class Pair {
private:
    T1 a;
    T2 b;
public:
    T1 &first();
    T2 &second();
    T1 first() const { return a; }
    T2 second() const { return b; }
    void setFirst(T1 av) { a = av; }
    void setSecond(T2 bv) { b = bv; }
    Pair(const T1 &av, const T2 &bv): a(av),b(bv) {}
    Pair() {}
};

template <class T1, class T2>
T1 &Pair<T1, T2>::first() {
    return a;
}

template <class T1, class T2>
T2 &Pair<T1, T2>::second() {
    return b;
}

using namespace std;

typedef valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine {
private:
    string label;
    int year;
    Pair<int, int> *yearBottles;
public:
    Wine(const char *l, int y, const int yr[], const int bot[]);
    Wine(const char *l, int y);
    void GetBottles();
    string &Label();
    int sum();
    void Show();
    ~Wine();
};


#endif /* Wine_hpp */
