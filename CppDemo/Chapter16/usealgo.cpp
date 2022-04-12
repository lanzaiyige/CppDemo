//
//  usealgo.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/12.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "usealgo.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
void inputData() {
    vector<string> words;
    string input;
    while (cin >> input && input != "quit") {
        words.push_back(input);
    }
}
