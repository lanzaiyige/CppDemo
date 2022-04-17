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
#include <ctime>
#include <list>

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

void test_execrise() {
    string str,origin;
    cin >> str;
    origin = string(str);
    reverse(str.begin(), str.end());
    if (str == origin) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}

int reduce(long ar[], int n) {
    
    sort(ar, ar + n);
    vector<long> arrset(ar, ar + n);
    auto iter = unique(arrset.begin(), arrset.end());
    arrset.erase(iter, arrset.end());
    return (int)arrset.size();
}

template <typename T>
int reduceT(T ar[], int n) {
    sort(ar, ar + n);
    vector<long> arrset(ar, ar + n);
    auto iter = unique(arrset.begin(), arrset.end());
    arrset.erase(iter, arrset.end());
    return (int)arrset.size();
}

void print_reduce() {
    long array[] = {5,7,3,4,1,2,3,4,1};
    int count = reduceT(array, 9);
    printf("%i", count);
}

vector<int> lotto(int total, int res_count) {
    if (res_count > total) return {};
    
    vector<int> t;
    for (int i = 1; i <= total; i++) {
        t.push_back(i);
    }
    
    vector<int> res;
    for (int i = 0; i < res_count; i++) {
        int item = rand() % t.size();
        t.erase(t.begin() + item);
        res.push_back(item + 1);
    }
    return res;
}

void print_lotto(int total, int count) {
    vector<int> res = lotto(total, count);
    for (int item : res) {
        printf("%i\t", item);
    }
}

void test_time() {
    vector<int> vi0;
    for (int i = 0; i < 10000000; i++) {
        int item = rand() % 999999;
        vi0.push_back(item);
    }
    
    vector<int> vi(vi0);
    clock_t start = clock();
    sort(vi.begin(), vi.end());
    clock_t end = clock();
    cout << "vector sort time : " << (double)(end - start) / CLOCKS_PER_SEC << endl;
    
    list<int> li;
    for(int item : vi0) {
        li.push_back(item);
    }
    
    clock_t start1 = clock();
    li.sort();
    clock_t end1 = clock();
    cout << "list sort time : " << (double)(end1 - start1) / CLOCKS_PER_SEC << endl;
}
