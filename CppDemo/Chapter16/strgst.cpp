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
#include <list>
#include <algorithm>

using namespace std;

void Show(int);
const int LIM = 10;

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

void Show(int v) {
    cout << v << " ";
}

void test_list_rmv() {
    int ar[LIM] = {4,5,4,2,2,3,4,8,1,4};
    list<int> la(ar, ar + LIM);
    list<int> lb(la);
    for_each(la.begin(), la.end(), Show);
    cout << endl;
    la.remove(4);
    for_each(la.begin(), la.end(), Show);
    cout << endl;
    list<int>::iterator last;
    last = remove(lb.begin(), lb.end(), 4);
    for_each(lb.begin(), lb.end(), Show);
    cout << endl;
    lb.erase(last, lb.end());
    for_each(lb.begin(), lb.end(), Show);
    cout << endl;
}
