//
//  algorithm.hpp
//  Algorithm
//
//  Created by Bluelich on 2018/5/23.
//  Copyright © 2018年 Bluelich. All rights reserved.
//

#ifndef algorithm_hpp
#define algorithm_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

struct ListNode {
    struct ListNode *next;
    int val;
};
typedef struct ListNode ListNode;

ListNode *findKthDistanceToTail(ListNode *node,unsigned int k);



#endif /* algorithm_hpp */
