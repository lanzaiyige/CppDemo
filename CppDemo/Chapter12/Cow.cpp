//
//  Cow.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/12.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "Cow.h"

Cow::Cow() {
    name[0] = '\0';
    hobby = nullptr;
    weight = 0;
}

Cow::Cow(const char *nm, const char *ho, double wt) {
    strcpy(name, nm);
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c) {
    strcpy(name, c.name);
    hobby = new char[strlen(c.name) + 1];
    strcpy(hobby, c.name);
    weight = c.weight;
}

Cow::~Cow() {
    delete [] hobby;
}

Cow & Cow::operator=(const Cow &c) {
    strcpy(name, c.name);
    hobby = new char[strlen(c.name) + 1];
    strcpy(hobby, c.name);
    weight = c.weight;
    return *this;
}

void Cow::showCow() const {
    cout << "name: " << this->name << "\n";
    cout << "hobby: " << this->hobby << "\n";
    cout << "weight: " << this->weight << "\n";
}
