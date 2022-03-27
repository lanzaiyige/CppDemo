//
//  winec.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/3/27.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "winec.h"

Pairc::Pairc(const int x1[], const int x2[], int s) {
    size = s;
    for (int i = 0;i < size; i++) {
        x[i] = x1[i];
        y[i] = x2[i];
    }
}

Pairc::Pairc(int s) {
    size = s;
    for (int i = 0;i < size; i++) {
        x[i] = 0;
        y[i] = 0;
    }
}

void Pairc::SetFirst(const int x1[]) {
    for (int i = 0;i < size; i++) {
        x[i] = x1[i];
    }
}

void Pairc::setSecond(const int y1[]) {
    for (int i = 0;i < size; i++) {
        x[i] = y1[i];
    }
}

int Pairc::sumFirst() {
    return x.sum();
}

int Pairc::sumSecond() {
    return y.sum();
}

void Pairc::show() {
    for (size_t in = 0; in < x.size(); in++) {
        std::cout << x[in] << ",  " << y[in] << "\n";
    }
}
