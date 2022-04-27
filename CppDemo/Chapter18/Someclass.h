//
//  Someclass.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/27.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef Someclass_hpp
#define Someclass_hpp

#include <stdio.h>

class Someclass {
public:
    void redo(double);
    void redo(int) = delete;
};

#endif /* Someclass_hpp */
