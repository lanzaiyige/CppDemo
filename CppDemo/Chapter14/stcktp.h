//
//  stcktp.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/3/13.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef stcktp_hpp
#define stcktp_hpp

#include <stdio.h>

template <class Type>
class Stack {
private:
    enum {SIZE = 10};
    int stacksize;
    Type *items;
    int top;
public:
    explicit Stack(int ss = SIZE);
    Stack(const Stack &s);
    ~Stack() { delete [] items; }
    bool isempty() { return top == 0; }
    bool isfull() { return top == SIZE; }
    bool push(const Type &item);
    bool pop(Type &item);
    Stack &operator=(const Stack &st);
};

template <class Type>
Stack<Type>::Stack(int ss) : stacksize(ss), top(0) {
    items = new Type[ss];
}

template <class Type>
Stack<Type>::Stack(const Stack &s) {
    stacksize = s.stacksize;
    top = s.top;
    items = new Type[stacksize];
    for (int i = 0; i < stacksize; i++) {
        items[i] = s.items[i];
    }
}

template <class Type>
bool Stack<Type>::push(const Type &item) {
    if (top < stacksize) {
        items[top++] = item;
        return true;
    } else {
        return false;
    }
}

template <class Type>
bool Stack<Type>::pop(Type &item) {
    if (top > 0) {
        item = items[top--];
        return true;
    } else {
        return false;
    }
}

template <class Type>
Stack<Type> &Stack<Type>::operator=(const Stack &st) {
    if (st == this) {
        return *this;
    }
    
    delete [] items;
    stacksize = st.stacksize;
    top = st.top;
    items = new Type[stacksize];
    for (int i = 0; i < stacksize; i++) {
        items[i] = st.items[i];
    }
    return *this;
}

#endif /* stcktp_hpp */
