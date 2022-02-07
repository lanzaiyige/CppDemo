//
//  Stack.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/1/26.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>

typedef unsigned long Item;

class Stack {
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isEmpty();
    bool isFull();
    bool push(const Item &item);
    bool pop(Item &item);
};

#endif /* Stack_hpp */
