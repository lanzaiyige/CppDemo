//
//  dma.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/26.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "dma.h"

baseDMA::baseDMA(const char *l, int r) {
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}

baseDMA::baseDMA(const baseDMA &b) {
    label = new char[strlen(b.label) + 1];
    strcpy(label, b.label);
    rating = b.rating;
}

baseDMA::~baseDMA() {
    delete [] label;
}

baseDMA &baseDMA::operator=(const baseDMA &b) {
    if (this == &b) return *this;
    delete [] label;
    label = new char[strlen(b.label) + 1];
    strcpy(label, b.label);
    rating = b.rating;
    
    return *this;
}

ostream &operator<<(ostream &os, const baseDMA &b) {
    os << "Label: " << b.label << ",rating: " << b.rating << endl;
    return os;
}

lacksDMA::lacksDMA(const char *c, const char *l, int r) : baseDMA(l, r) {
    strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char *c, const baseDMA &b) : baseDMA(b) {
    strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

ostream &operator<<(ostream &os, const lacksDMA &l) {
    os << (const baseDMA &)l << ",Color: " << l.color << endl;
    return os;
}

hasDMA::hasDMA(const char *s, const char *l, int r) : baseDMA(l, r) {
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const char *s, const baseDMA &b) : baseDMA(b) {
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &h) : baseDMA(h) {
    style = new char[strlen(h.style) + 1];
    strcpy(style, h.style);
}

hasDMA::~hasDMA() {
    delete [] style;
}

hasDMA &hasDMA::operator=(const hasDMA &h) {
    if (&h == this) {
        return *this;
    }
    
    baseDMA::operator=(h);
    delete [] style;
    style = new char[strlen(h.style) + 1];
    strcpy(style, h.style);
    return *this;
}

ostream &operator<<(ostream &os, const hasDMA &l) {
    os << (const baseDMA &)l << ",style: " << l.style << endl;
    return os;
}
