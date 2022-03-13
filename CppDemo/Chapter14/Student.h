//
//  Student.h
//  CppDemo
//
//  Created by tanzhikang on 2022/3/6.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <string>
#include <valarray>
#include <iostream>

using namespace std;

class Student : private string, private valarray<double> {
private:
    typedef  valarray<double> ArrayDB;
    string name;
public:
    Student() : string("Null Student"),ArrayDB() {}
    explicit Student(const string &s) : string(s), ArrayDB() {}
    explicit Student(int n) : string("Nully"), ArrayDB(n) {}
    Student(const string &s, int n) : string(s), ArrayDB(n) {}
    Student(const string &s, const ArrayDB &a) : string(s),ArrayDB(a) {}
    Student(const char *s, const double *pd, int n) : string(s),ArrayDB(pd, n) {}
    
    ~Student(){}
    double Average() const;
    const string &Name() const;
    double &operator[](int i);
    double operator[](int i) const;
    
    friend istream &operator>>(istream &is, Student &stu);
    friend istream &getline(istream &is, Student &stu);
    friend istream &operator<<(ostream &os, const Student &stu);
};

#endif /* Student_hpp */
