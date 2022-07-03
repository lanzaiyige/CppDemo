//
//  ListNode.h
//  CppDemo
//
//  Created by tanzhikang on 2022/6/5.
//

#ifndef ListNode_h
#define ListNode_h
#include <iostream>

using namespace std;

struct ListNode {
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    void output() {
        ListNode *cur = this;
        do {
            cout << cur->val << "\t";
            cur = cur->next;
        } while (cur != nullptr);
        cout << "\n";
    }
    void print() {
        ListNode *cur = this;
        cout << cur->val << endl;
    }
};


#endif /* ListNode_h */
