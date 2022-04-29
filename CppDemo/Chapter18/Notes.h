//
//  Notes.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/27.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef Notes_hpp
#define Notes_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Notes {
private:
    int k;
    double x;
    string st;
public:
    Notes();
    Notes(int);
    Notes(int ,double);
    Notes(int ,double, string);
};

Notes::Notes(int kk, double xx, string stt) : k(kk), x(xx), st(stt) { }
Notes::Notes() : Notes(0, 0.01, "Ph") { }
Notes::Notes(int kk) : Notes(kk, 0.01, "Ah") { }
Notes::Notes(int kk, double xx) : Notes(kk, xx, "Uh") { }


#endif /* Notes_hpp */
