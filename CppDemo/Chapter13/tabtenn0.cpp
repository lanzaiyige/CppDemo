//
//  tabtenn0.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/13.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "tabtenn0.h"
#include <iostream>

using namespace std;

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht) : firstname(fn),lastname(ln),hasTable(ht) {
}

void TableTennisPlayer::Name() const {
    cout << lastname << ", " << firstname << endl;
}

RatedPlayer::RatedPlayer(unsigned int r, const string &fn, const string &ln, bool ht) : TableTennisPlayer(fn, ln, ht) {
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer &tp) : TableTennisPlayer(tp),rating(r) {
}
