//
//  141_linked_list_cycle_easy.cpp
//  leetcode
//
//  Created by Lina Veltman on 17.02.2022.
//

#include <stdio.h>
#include <vector>
#include <unordered_set>
#include <memory>

using namespace std;

//  Definition for singly-linked list.
struct ListNode {
 int val;
 ListNode *next;
 ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
//    bool hasCycle(ListNode *head) {
//        unordered_set<ListNode*> unique;
//
//        while (head != nullptr) {
//            if (unique.count(head))
//                return true;
//            unique.insert(head);
//            head = head->next;
//        }
//        return false;
//    }
   bool hasCycle(ListNode *head) {
       ListNode* node = head;
       ListNode* nextNode = head;
       while (nextNode && nextNode->next) {
           node = node->next;
           nextNode = nextNode->next->next;
           if (node == nextNode)
               return true;
       }
       return false;
   }
};


