//
//  strgst.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/4/11.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include "strgst.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void test_string_premutation() {
    string letters;
    cout << "Enter the letter";
    while (cin >> letters && letters != "quit") {
        cout << "letter is :" << letters << endl;
        sort(letters.begin(), letters.end());
        cout << letters << endl;
        while (next_permutation(letters.begin(), letters.end())) {
            cout << letters << endl;
        }
        cout << "Enter next : ";
    }
    cout << "Done.\n";
}
