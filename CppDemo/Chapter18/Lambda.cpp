//
//  Lambda.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/29.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "Lambda.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <ctime>

using namespace std;

const long Size = 390000L;

void test_lambda() {
    vector<int> numbers(Size);
    srand(time(0));
    generate(numbers.begin(), numbers.end(), rand);
    int count = count_if(numbers.begin(), numbers.end(), [](int x){
        return x % 3 == 0;
    });
    
    int count13 = 0;
    for_each(numbers.begin(), numbers.end(), [&count13](int x){
        count13 += x % 13 == 0;
    });
    cout << count13 << endl;
    
    
}
