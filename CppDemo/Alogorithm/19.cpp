//
//  19.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/6/5.
//

#include "19.hpp"

ListNode* Solution::removeNthFromEnd(ListNode *head, int n) {
    if (!head) {
        return NULL;
    }
    
    head->next = removeNthFromEnd(head->next, n);
    cur++;
    if (cur == n) {
        return head->next;
    }
    return head;
}
