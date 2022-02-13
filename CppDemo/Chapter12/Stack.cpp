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

Stack::Stack(int n) {
    pitems = new Item[n];
    top = 0;
    size = 0;
}

Stack::Stack(const Stack &st) {
    pitems = new Item[MAX];
    size = st.size;
    top = st.top;
    for (int i = 0; i < st.size; i++) {
        pitems[i] = st.pitems[i];
    }
}

Stack & Stack::operator=(const Stack &st) {
    pitems = new Item[MAX];
    size = st.size;
    top = st.top;
    for (int i = 0; i < st.size; i++) {
        pitems[i] = st.pitems[i];
    }
    
    return *this;
}

Stack::~Stack() {
    delete [] pitems;
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
//        items[top++] = item;
        pitems[top++] = item;
    }
    return true;
}

bool Stack::pop(Item &item) {
    if (top <= 0) {
        return false;
    } else {
//        item = items[--top];
        item = pitems[--top];
        return true;
    }
}
