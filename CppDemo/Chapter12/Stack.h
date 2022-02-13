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
    Item *pitems;
    int top;
    int size;
public:
    Stack();
    Stack(int n = MAX);
    Stack(const Stack &st);
    ~Stack();
    bool isEmpty();
    bool isFull();
    bool push(const Item &item);
    bool pop(Item &item);
    Stack &operator=(const Stack &st);
};

#endif /* Stack_hpp */
