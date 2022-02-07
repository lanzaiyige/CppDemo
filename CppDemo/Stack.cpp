//
//  Stack.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/1/26.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "Stack.h"

Stack::Stack() {
    top = 0;
}

bool Stack::isEmpty() {
    return top == 0;
}

bool Stack::isFull() {
    return top == MAX;
}

bool Stack::push(const Item &item) {
    if (top >= MAX) {
        return false;
    } else {
        items[top++] = item;
    }
    return true;
}

bool Stack::pop(Item &item) {
    if (top <= 0) {
        return false;
    } else {
        item = items[--top];
        return true;
    }
}
