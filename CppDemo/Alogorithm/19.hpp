//
//  19.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/6/5.
//

#ifndef _9_hpp
#define _9_hpp

#include <stdio.h>
#include "ListNode.h"

class Solution {
public:
    int cur = 0;
    // leetcode 19
    ListNode* removeNthFromEnd(ListNode *head, int n);
    
    ListNode* removeNthFromEnd1(ListNode *head, int n);
    
    // leetcode 21
    ListNode* mergeTwoLists(ListNode *l1, ListNode *l2);
    
    // leetcode 23
    ListNode* mergeKLists(ListNode lists[]);
    
    ListNode* findFromEnd(ListNode *head, int k);
    
    ListNode* removeFromEnd(ListNode *head, int n);
    
    ListNode* middleNode(ListNode *head);
    
    bool hasCycle(ListNode *head);
    
    ListNode* findCycleStart(ListNode *head);
    
    ListNode* hasIntersectNode(ListNode *headA, ListNode *headB);
};

#endif /* _9_hpp */
