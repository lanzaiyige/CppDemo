//
//  19.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/6/5.
//

#ifndef _9_hpp
#define _9_hpp

#include <stdio.h>
#include <string>
#include "ListNode.h"

using namespace std;

class LinkList {
public:
    int cur = 0;
    ListNode *successor = nullptr;
    
    // 移除链表倒数第n个结点，解法1
    ListNode* removeNthFromEnd(ListNode *head, int n);
    
    // 移除链表倒数第n个结点，解法2
    ListNode* removeNthFromEnd1(ListNode *head, int n);
    
    // 合并两个链表
    ListNode* mergeTwoLists(ListNode *l1, ListNode *l2);
    
    // 合并K个链表
    ListNode* mergeKLists(ListNode lists[]);
    
    // 查找单向链表倒数第k个结点
    ListNode* findFromEnd(ListNode *head, int k);
    
    // 删除单向链表的倒数第n个结点
    ListNode* removeFromEnd(ListNode *head, int n);
    
    // 寻找单向链表的中点
    ListNode* middleNode(ListNode *head);
    
    // 链表是否存在环
    bool hasCycle(ListNode *head);
    
    // 寻找存在环的链表的起点
    ListNode* findCycleStart(ListNode *head);
    
    // 判断链表是否有相交点
    ListNode* hasIntersectNode(ListNode *headA, ListNode *headB);
    
    // 递归反转链表
    ListNode* reverse(ListNode *head);
    
    // 迭代反转链表
    ListNode* reverse_iterator(ListNode *head);
    
    // 迭代反转链表区间[a, b)的元素
    ListNode* reverse_iterator(ListNode *a, ListNode *b);
    
    // 递归反转链表前N个结点
    ListNode* reverseN(ListNode *head, int n);
    
    // 递归反转链表第m到n个结点
    ListNode* reverseBetween(ListNode *head, int m, int n);
    
    // 递归以n个结点为一组反转链表
    ListNode* reverseKGroup(ListNode *head, int n);
    
    // 寻找回文字符串
    string palindrome(const string &s, int left, int right);
    
    // 判断是否回文字符串
    bool isPalindrome(const string &s);
    
    // 判断是否回文链表
    bool isPalindromeList(ListNode *head);
};

#endif /* _9_hpp */
