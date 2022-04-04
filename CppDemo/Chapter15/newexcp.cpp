//
//  newexcp.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/4.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "newexcp.h"

Demo::Demo() {
    try {
        cout << "before" << endl;
//        pb = new Big[100000];
        pb = new (std::nothrow) Big[10000];
        cout << "init" << endl;
    } catch (bad_alloc &ba) {
        cout << "exception" << endl;
        exit(EXIT_FAILURE);
    }
    cout << "success" << endl;
    pb[0].stuff[0] = 4;
    cout << pb[0].stuff[0] << endl;
    delete [] pb;
}
