//
//  RTTI.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/6.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "RTTI.h"

Grand *GetOne() {
    Grand *p = nullptr;
    switch (rand() % 3) {
        case 0:
            p = new Grand(rand() % 100);
            break;
        case 1:
            p = new Superb(rand() % 100);
            break;
        case 2:
            p = new Magnificent(rand() % 100, 'A' + rand() % 26);
            break;
    }
    return p;
}
