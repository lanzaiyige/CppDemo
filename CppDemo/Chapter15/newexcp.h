//
//  newexcp.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/4.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef newexcp_hpp
#define newexcp_hpp

#include <stdio.h>
#include <iostream>
#include <new>
#include <cstdlib>

using namespace std;

struct Big {
    double stuff[20000];
};

class Demo {
private:
    Big *pb;
public:
    Demo();
};

#endif /* newexcp_hpp */
