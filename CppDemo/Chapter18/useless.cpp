//
//  useless.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/21.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "useless.h"

int Useless::ct = 0;

Useless::Useless() {
    ++ct;
    n = 0;
    pc = nullptr;
    cout << "defualt constructor " << ct << endl;
    ShowObject();
}

Useless::Useless(int k) : n(k) {
    ++ct;
    pc = new char[n];
    cout << "int constructor " << ct << endl;
    ShowObject();
}

Useless::Useless(int k, char ch) : n(k) {
    ++ct;
    cout << "int ,char constructor " << ct << endl;
    pc = new char[n];
    for (int i = 0; i < n; i++) {
        pc[i] = ch;
    }
    ShowObject();
}

Useless::Useless(const Useless &u) {
    ++ct;
    cout << "copy const contructor " << ct << endl;
    n = u.n;
    pc = new char[n];
    for (int i = 0; i < n; i++) {
        pc[i] = u.pc[i];
    }
    ShowObject();
}

Useless::Useless(Useless &&u) {
    ++ct;
    cout << "move contructor " << ct << endl;
    n = u.n;
    pc = u.pc;
    u.pc = nullptr;
    u.n = 0;
    ShowObject();
}

Useless::~Useless() {
    cout << "destory call" << --ct << endl;
    ShowObject();
    delete [] pc;
}

Useless Useless::operator+(const Useless &u) const {
    cout << "operator+()\n";
    Useless temp = Useless(n + u.n);
    for (int i = 0; i < n; i++) {
        temp.pc[i] = pc[i];
    }
    for (int i = n; i < temp.n; i++) {
        temp.pc[i] = u.pc[i - n];
    }
    cout << "leave operator+()\n";
    return temp;
}

void Useless::ShowObject() const {
    
}
