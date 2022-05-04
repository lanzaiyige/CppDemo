//
//  cpmv.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/5/4.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "cpmv.h"

Cmpv::Cmpv() {
    pi = new Info();
    pi->qcode = "";
    pi->zcode = "";
}

Cmpv::Cmpv(string q, string z) {
    pi = new Info();
    pi->zcode = z;
    pi->qcode = q;
}

Cmpv::Cmpv(const Cmpv &cp) {
    pi = new Info();
    pi->zcode = cp.pi->zcode;
    pi->qcode = cp.pi->qcode;
}

Cmpv::~Cmpv() {
    delete pi;
}

