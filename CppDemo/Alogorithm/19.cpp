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

ListNode* Solution::removeNthFromEnd1(ListNode *head, int n) {
    
    return nullptr;
}


ListNode* Solution::mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode* dummy = new ListNode(-1);
    ListNode* p = dummy;
    ListNode* p1 = l1;
    ListNode* p2 = l2;
    
    while (p1 != nullptr && p2 != nullptr) {
        if (p1->val > p2->val) {
            p->next = p2;
            p2 = p2->next;
        } else {
            p->next = p1;
            p1 = p1->next;
        }
        
        p = p->next;
    }
    
    if (p1 != nullptr) p->next = p1;
    if (p2 != nullptr) p->next = p2;
    
    return dummy->next;
}

ListNode* Solution::findFromEnd(ListNode *head, int k) {
    ListNode *front = head;
    ListNode *behind = head;
    for (int i = 0; i < k; i++) {
        front = front->next;
    }
    
    while (front->next != nullptr) {
        front = front->next;
        behind = behind->next;
    }
    
    return behind;
}

ListNode* Solution::mergeKLists(ListNode lists[]) {
    ListNode *dummy = new ListNode(-1);
    
    
    
    return dummy->next;
}
