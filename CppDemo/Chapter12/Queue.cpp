//
//  Queue.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/2/12.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "Queue.h"
#include <cstdlib>

Queue::Queue(int qs) : maxsize(qs), front(NULL), rear(NULL), items(0) {}

Queue::~Queue() {
    Node *temp;
    while (front != NULL) {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isEmpty() const {
    return items == 0;
}

bool Queue::isFull() const {
    return items == maxsize;
}

int Queue::count() const {
    return items;
}

bool Queue::enqueue(const Item &item) {
    if (isFull()) {
        return false;
    }
    
    Node *add = new Node;
    add->item = item;
    add->next = NULL;
    items++;
    if (front == NULL) {
        front = add;
    } else {
        rear->next = add;
    }
    
    return true;
}

bool Queue::dequeue(Item &item) {
    if (isEmpty()) {
        return false;
    }
    
    item = front->item;
    items--;
    Node *temp = front;
    front = front->next;
    delete temp;
    
    if (items == 0) {
        rear = NULL;
    }
    
    return true;
}

void Customer::set(long when) {
    processtime = std::rand() % 3 + 1;
    arrive = when;
}
