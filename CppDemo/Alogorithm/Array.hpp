//
//  Array.hpp
//  CppDemo
//
//  Created by tanzhikang on 2022/7/3.
//

#ifndef Array_hpp
#define Array_hpp

#include <stdio.h>
#include <string>
#include "ListNode.h"

class Array {
public:
    // 有序数组移除重复元素
    int removeDulicates(int nums[], int size);
    
    // 有序链表移除重复项
    ListNode *deleteDuplicates(ListNode *head);
    
    // 移除数组中值为val的元素
    int removeElement(int nums[], int size, int val);
    
    // 将0移到数组末尾
    void moveZerosToEnd(int nums[], int size);
    
    // 二分查找
    int binarySearch(int nums[], int size, int target);
    
    int* twoSum(int nums[], int size, int target);
};

#endif /* Array_hpp */
