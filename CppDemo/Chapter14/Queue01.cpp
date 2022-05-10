//
//  Queue.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/3.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "Queue01.h"
#include <cstdlib>

Workers& Workers::operator=(const Workers &wk) {
    fullname = wk.fullname;
    id = wk.id;
    return *this;
}

void Workers::Show() const {
    std::cout << this->fullname << ",  " << this->id << std::endl;
}
