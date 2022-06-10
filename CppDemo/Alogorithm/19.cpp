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
    ListNode *p1 = head;
    ListNode *p2 = head;
    for (int i = 0; i < n; i++) {
        p1 = p1->next;
    }
    while (p1 != nullptr) {
        p1 = p1->next;
        p2 = p2->next;
    }
    
    return p2;
}

ListNode* Solution::removeFromEnd(ListNode *head, int n) {
    ListNode *dummy = new ListNode(-1);
    ListNode *node = findFromEnd(dummy, n + 1);
    if (node != nullptr) {
        node->next = node->next->next;
    }
    
    return dummy;
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

ListNode* Solution::middleNode(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}

bool Solution::hasCycle(ListNode *head) {
    ListNode *slow = head, *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return true;
        }
    }
    
    return false;
}

ListNode* Solution::findCycleStart(ListNode *head) {
    ListNode *slow = head, *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }
    if (fast == nullptr || fast->next == nullptr) {
        return nullptr;
    }
    
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    
    return slow;
}

ListNode* Solution::hasIntersectNode(ListNode *headA, ListNode *headB) {
    ListNode *p1 = headA, *p2 = headB;
    while (p1 != p2) {
        if (p1 == nullptr) {
            p1 = headB;
        } else {
            p1 = p1->next;
        }
        
        if (p2 == nullptr) {
            p2 = headA;
        } else {
            p2 = p2->next;
        }
    }
    
    return p1;
}

ListNode* Solution::mergeKLists(ListNode lists[]) {
    ListNode *dummy = new ListNode(-1);
    
    
    
    return dummy->next;
}
