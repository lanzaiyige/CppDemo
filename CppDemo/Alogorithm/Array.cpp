//
//  Array.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/7/3.
//

#include "Array.hpp"

// int nums[] = {0,0,1,1,1,2,2,3,4};
int Array::removeDulicates(int nums[], int size) {
    if (size == 0) return 0;
    int slow = 0, fast = 0;
    
    while (fast < size) {
        if (nums[slow] != nums[fast]) {
            slow++;
            nums[slow] = nums[fast];
        }
        
        fast++;
    }
    
    return slow + 1;
}

ListNode *Array::deleteDuplicates(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;
    
    while (fast != nullptr) {
        if (slow->val != fast->val) {
            slow->next = fast;
            slow = slow->next;
        }
        
        fast = fast->next;
    }
    slow->next = nullptr;
    return head;
}

int Array::removeElement(int nums[], int size, int val) {
    if (size == 0) {
        return 0;
    }
    
    int slow = 0;
    int fast = 0;
    
    while (fast < size) {
        if (nums[fast] != val) {
            nums[slow] = nums[fast];
            slow++;
        }
        fast++;
    }
    
    return slow;
}

void Array::moveZerosToEnd(int nums[], int size) {
    int res = removeElement(nums, size, 0);
    for (int i = res; i < size; i++) {
        nums[i] = 0;
    }
}
