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

int Array::binarySearch(int nums[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] == target) {
            return nums[mid];
        } else if (nums[mid] > target) {
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        }
    }
    
    return -1;
}

int* Array::twoSum(int nums[], int size, int target) {
    int *r = new int[size];
    
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            
        }
    }
    
    return r;
}
