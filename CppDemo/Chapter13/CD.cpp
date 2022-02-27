//
//  CD.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/27.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "CD.h"

CD::CD(char *s1, char *s2, int n, double x) {
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

CD::CD(const CD &cd) {
    strcpy(performers, cd.performers);
    strcpy(label, cd.label);
    selections = cd.selections;
    playtime = cd.playtime;
}

CD::CD() {
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

CD::~CD() {}

void CD::Report() const {
    cout << "name: " << performers << ", label: " << label << endl;
}

CD &CD::operator=(const CD &cd) {
    if (&cd == this) {
        return *this;
    }
    
    strcpy(performers, cd.performers);
    strcpy(label, cd.label);
    selections = cd.selections;
    playtime = cd.playtime;
    return *this;
}

Classic::Classic(char *s1, char *s2, int n, double x, char *s) : CD(s1, s2, n, x) {
    strcpy(mainSongs, s);
}

Classic::Classic(const CD &c, char *s) : CD(c) {
    strcpy(mainSongs, s);
}

Classic::Classic() : CD() {
    mainSongs[0] = '\0';
}

Classic::~Classic() { }

void Classic::Report() const {
    CD::Report();
    cout << "main songs: " << mainSongs << endl;
}

Classic &Classic::operator=(const Classic &cd) {
    if (this == &cd) {
        return *this;
    }
    
    CD::operator=(cd);
    strcpy(mainSongs, cd.mainSongs);
    return *this;
}
