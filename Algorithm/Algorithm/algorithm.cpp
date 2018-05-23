//
//  algorithm.cpp
//  Algorithm
//
//  Created by Bluelich on 2018/5/23.
//  Copyright © 2018年 Bluelich. All rights reserved.
//

#include "algorithm.hpp"

ListNode * findKthDistanceToTail(ListNode *node,unsigned int k){
    //处理异常
    if (!node || k == 0) {
        return NULL;
    }
    //fast 先走 k 步
    ListNode *fast = node;
    for (unsigned int i = 0; i < k - 1; ++i) {
        if (fast -> next) {
            fast = fast -> next;
        }else{
            //处理异常
            return NULL;
        }
    }
    //slow 从链表头部开始,距离 fast 刚好 k 步
    ListNode *slow = fast;
    while (fast -> next) {
        fast = fast -> next;
        slow = slow->next;
    }
    return slow;
}
