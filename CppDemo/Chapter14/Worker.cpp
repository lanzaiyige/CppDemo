//
//  Worker.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/3/13.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "Worker.h"
#include <iostream>

Worker::~Worker() {}

void Worker::Set() {
    cout << "Enter worker's name: ";
    getline(cin, fullname);
    cout << "Enter worker's ID: ";
    cin >> id;
    while (cin.get() != '\n') {
        continue;
    }
}

void Worker::Show() const {
    cout << "Name: " << fullname << "\n";
    cout << "Employee ID: " << id << "\n";
}

void Waiter::Set() {
    Worker::Set();
    cout << "Enter waiter's panache rating: ";
    cin >> panache;
    while (cin.get() != '\n') {
        continue;
    }
}

char *Singer::pv[] = {"other", "wLow", "wMedium", "wHigh", "mLow", "mMedium", "mHigh"};

void Waiter::Show() const {
    cout << "Category: waiter\n";
    Worker::Show();
    cout << "Panache rating: " << panache << "\n";
}

void Singer::Set() {
    Worker::Set();
    cout << "Enter number for singer's vocal range: \n";
    int i;
    for (i = 0; i < Vtypes; i++) {
        cout << i << ": " << pv[i] << " ";
        if (i % 4 == 3) {
            cout << endl;
        }
    }
    if (i % 4 != 0) {
        cout << endl;
    }
    while (cin >> voice && (voice < 0 || voice >= Vtypes)) {
        cout << "Please enter a value >= 0 and < " << Vtypes << endl;
    }
    while (cin.get() != '\n') {
        continue;
    }
}

void Singer::Show() const {
    cout << "Category: singer\n";
    Worker::Show();
    cout << "Vocal range: " << pv[Vtypes] << endl;
}
