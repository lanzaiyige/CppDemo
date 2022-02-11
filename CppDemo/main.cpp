//
//  main.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/1/24.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include <iostream>
#include "Stock00.h"
#include "mytime.h"
#include "placenew1.h"

void stocktest() {
    Stock s1 = Stock();
    Stock s2("asdf");
    Stock *s3 = new Stock("haha");

    s1.show();
    s2.show();
    s3->show();

    const int size = 3;

    Stock array[size] = {
        Stock("xixi", 5),
        Stock("haha", 1),
        Stock("kiki", 10)
    };

    const Stock *temp = &array[0];

    const Stock *res;
    for (int i = 0; i < size; i++) {
        res = &(temp->topVal(array[i]));
    }
    res->show();
}

void friendtest() {
    Time A = Time(1, 40);
    Time B = A * 2;
    B.show();
}

void testplace() {
    char *buffer = new char[BUF];
    JustTesting *pc1, *pc2;
    pc1 = new (buffer) JustTesting;
    pc2 = new JustTesting("Heap1", 20);
    
    delete [] pc1;
}

int main(int argc, const char * argv[]) {
//    friendtest();
    
    
    
    return 0;
}
