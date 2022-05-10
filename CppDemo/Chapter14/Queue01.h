//
//  Queue.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/3.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Workers {
private:
    string fullname;
    long id;
public:
    Workers() : fullname("None"), id(0) {}
    Workers(const string &f, long i) : fullname(f), id(i) {}
    ~Workers() {};
    void set(const string &f, long i) {
        fullname = f;
        id = i;
    }
    Workers &operator=(const Workers &wk);
    void Show() const;
};

template<typename T>
class Queue {
private:
    struct Node {
        T item;
        Node *next;
    };
    enum { Q_SIZE = 10 };
    Node *front, *rear;
    int items;
    const int qsize;
    Queue(const Queue &q) : qsize(0) {}
    Queue& operator=(const Queue &q) { return *this; }
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const T &i);
    bool dequeue(T &i);
    void show() const;
};

template<typename T>
Queue<T>::Queue(int qs) : qsize(qs) {
    front = rear = nullptr;
    items = 0;
}

template<typename T>
Queue<T>::~Queue() {
    Node *temp;
    while (front != nullptr) {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template<typename T>
bool Queue<T>::isempty() const {
    return items == 0;
}

template<typename T>
bool Queue<T>::isfull() const {
    return items == Q_SIZE;
}

template<typename T>
int Queue<T>::queuecount() const {
    return items;
}

template<typename T>
bool Queue<T>::enqueue(const T &i) {
    if (items < Q_SIZE) {
        Node *add = new Node;
        add->item = i;
        add->next = nullptr;
        
        if (items == 0) {
            front = add;
        } else {
            rear->next = add;
        }
        rear = add;
        items++;
        return true;
    }
    return false;
}

template<typename T>
bool Queue<T>::dequeue(T &i) {
    if (items == 0) {
        return false;
    }
    
    i = front->item;
    Node *temp = front;
    front = front->next;
    items--;

    delete temp;
    if (items == 0) {
        rear = nullptr;
    }
    return true;
}

template<typename Type>
void Queue<Type>::show()const
{
    Node* temp = front;
    for (int in = 0; in < qsize; in++, temp = temp->next)
        temp->item.Show();
}

#endif /* Queue_hpp */
