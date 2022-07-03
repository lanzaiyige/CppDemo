//
//  19.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/6/5.
//

#include "LinkList.hpp"

ListNode* LinkList::removeNthFromEnd(ListNode *head, int n) {
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

ListNode* LinkList::removeFromEnd(ListNode *head, int n) {
    ListNode *dummy = new ListNode(-1);
    ListNode *node = findFromEnd(dummy, n + 1);
    if (node != nullptr) {
        node->next = node->next->next;
    }

    return dummy;
}


ListNode* LinkList::mergeTwoLists(ListNode *l1, ListNode *l2) {
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

ListNode* LinkList::findFromEnd(ListNode *head, int k) {
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

ListNode* LinkList::middleNode(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

bool LinkList::hasCycle(ListNode *head) {
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

ListNode* LinkList::findCycleStart(ListNode *head) {
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

ListNode* LinkList::hasIntersectNode(ListNode *headA, ListNode *headB) {
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

ListNode* LinkList::mergeKLists(ListNode lists[]) {
    ListNode *dummy = new ListNode(-1);



    return dummy->next;
}

ListNode* LinkList::reverse(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode *last = reverse(head->next);
    head->next->next = head;
    head->next = nullptr;
    return last;
}

ListNode* LinkList::reverse_iterator(ListNode *head) {
    ListNode *cur, *pre, *next;
    cur = head;
    pre = nullptr;
    next = head;

    while (cur != nullptr) {
        next = cur->next;

        cur->next = pre;
        pre = cur;

        cur = next;
    }

    return pre;
}

ListNode* LinkList::reverse_iterator(ListNode *a, ListNode *b) {
    ListNode *pre, *cur, *next;
    pre = nullptr;
    cur = a;
    next = a;

    while (cur != b) {
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }

    return pre;
}

ListNode* LinkList::reverseN(ListNode *head, int n) {
    if (n == 1) {
        successor = head->next;
        return head;
    }

    ListNode *last = reverseN(head, n - 1);
    head->next->next = head;
    head->next = successor;

    return last;
}

ListNode* LinkList::reverseBetween(ListNode *head, int m, int n) {
    if (m == 1) {
        return reverseN(head, n);
    }

    head->next = reverseBetween(head->next, m - 1, n - 1);
    return head;
}

ListNode* LinkList::reverseKGroup(ListNode *head, int n) {
    if (head == nullptr) return nullptr;

    ListNode *a, *b;
    a = b = head;

    for (int i = 0; i < n; i++) {
        if (b == nullptr) return head;
        b = b->next;
    }

    ListNode *newHead = reverse_iterator(a, b);
    a->next = reverseKGroup(b, n);

    return newHead;
}

string LinkList::palindrome(const string &s, int left, int right) {
    if (s.length() == 0) return nullptr;
    if (s.length() == 1) return s;

    while (left >= 0 && right < s.length() && s.substr(left, 1) == s.substr(right, 1)) {
        left--;
        right++;
    }
    return s.substr(left + 1, right);
}

bool LinkList::isPalindrome(const string &s) {
    unsigned long left = 0, right = s.length() - 1;
    while (left < right) {
        if (s.substr(left, 1) != s.substr(right, 1)) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}


bool LinkList::isPalindromeList(ListNode *head) {
    ListNode *slow, *fast;
    slow = fast = head;

    while (fast != nullptr || fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }



    return false;
}
