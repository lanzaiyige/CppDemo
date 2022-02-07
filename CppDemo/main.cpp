//
//  main.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/1/24.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include <iostream>
#include "Stock00.h"

int main(int argc, const char * argv[]) {
//    Stock s1 = Stock();
//    Stock s2("asdf");
//    Stock *s3 = new Stock("haha");
//
//    s1.show();
//    s2.show();
//    s3->show();
    
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
    
    return 0;
}
