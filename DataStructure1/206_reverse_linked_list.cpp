//
//  206_reverse_linked_list.cpp
//  leetcode
//
//  Created by Lina Veltman on 24.02.2022.
//

#include <stdio.h>
#include <iostream>

using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next)
            return head;
        ListNode* ptr = head;
        ListNode* currNode = head;
        head = head->next;
        currNode->next = nullptr;
        while (head) {
            currNode = head;
            head = head->next;
            currNode->next = ptr;
            ptr = currNode;
        }
        return currNode;
    }
};



//int main() {
//    Solution sol;
//    ListNode* list = new ListNode();
//    ListNode* currNode = list;
//    for (int i = 0; i < 5; ++i) {
//        currNode->next = new ListNode(i + 1);
//        currNode = currNode->next;
//    }
//    ListNode* res = sol.reverseList(list);
//    ListNode* tmp = res;
//    while (tmp) {
//        cout << tmp->val << ' ';
//        tmp = tmp->next;
//    }
//    return 0;
//}
