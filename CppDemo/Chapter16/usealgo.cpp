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
#include <set>
#include <string>
#include <map>
#include <iterator>
#include <algorithm>
#include <cctype>
#include <valarray>

using namespace std;

char toLower(char ch) {
    return tolower(ch);
}

string &ToLower(string &st) {
    transform(st.begin(), st.end(), st.begin(), toLower);
    return st;
}

void inputData() {
    vector<string> words;
    string input;
    while (cin >> input && input != "quit") {
        words.push_back(input);
    }
    
    set<string> wordset;
    transform(words.begin(), words.end(), insert_iterator<set<string>>(wordset, wordset.begin()), ToLower);
    
    map<string, int> wordmap;
    set<string>::iterator iter;
    for (iter = wordset.begin(); iter != wordset.end(); iter++) {
        wordmap[*iter] = count(words.begin(), words.end(), *iter);
    }
    
    for (iter = wordset.begin(); iter != wordset.end(); iter++) {
        cout << *iter << ":" << wordmap[*iter] << endl;
    }
}

void test_valvect() {
    
}
