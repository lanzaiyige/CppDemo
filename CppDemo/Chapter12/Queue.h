//
//  Queue.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/12.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>

class Customer {
private:
    long arrive;
    int processtime;
public:
    Customer() : arrive(0), processtime(0) {}
    void set(long when);
    long when() const { return arrive; }
    int ptime() const { return processtime; }
};

typedef Customer Item;

class Queue {
private:
    enum { Q_SIZE=10 };
    struct Node {
        Item item;
        struct Node *next;
    };
    Node *front;
    Node *rear;
    int items;
    const int maxsize;
    
    Queue(const Queue &q) : maxsize(0) {}
    Queue &operator=(const Queue &q) { return *this; }
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isEmpty() const;
    bool isFull() const;
    int count() const;
    bool enqueue(const Item &item);
    bool dequeue(Item &item);
};


#endif /* Queue_hpp */
