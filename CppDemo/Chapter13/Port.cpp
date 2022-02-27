//
//  Port.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/27.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "Port.h"

Port::Port(const char *br, const char *st, int b) {
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port &p) {
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port &Port::operator=(const Port &p) {
    if (&p == this) {
        return *this;
    }
    
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port &Port::operator+=(int b) {
    if (b == 0) {
        return *this;
    }
    
    bottles += b;
    return *this;
}

Port &Port::operator-=(int b) {
    if (b == 0) {
        return *this;
    }
    
    bottles -= b;
    return *this;
}

void Port::Show() const {
    cout << "Brand: " << this->brand << endl;
    cout << "Kind: " << this->style << endl;
    cout << "Bottles: " << this->bottles << endl;
}

ostream &operator<<(ostream &os, const Port &p) {
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}

