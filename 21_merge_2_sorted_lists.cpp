//
//  21_merge_2_sorted_lists.cpp
//  leetcode
//
//  Created by Lina Veltman on 23.02.2022.
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* begin = new ListNode(-101);
        ListNode* res = begin;
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                res->next = list1;
                list1 = list1->next;
            }
            else {
                res->next = list2;
                list2 = list2->next;
            }
            res = res->next;
        }
        res->next = list1 ? list1 : list2;
        return begin->next;
    }
};

//int main() {
//    Solution sol;
//    ListNode* list1 = new ListNode(1);
//    ListNode* currNode1 = list1;
//    ListNode* list2 = new ListNode(1);
//    ListNode* currNode2 = list2;
//    for (int i = 1; i < 3; ++i) {
//        currNode1->next = new ListNode(i + 1);
//        currNode2->next = new ListNode(i + 2);
//        currNode1 = currNode1->next;
//        currNode2 = currNode2->next;
//    }
//    ListNode* res = sol.mergeTwoLists(list1, list2);
//    ListNode* tmp = res;
//    while (tmp) {
//        cout << tmp->val << ' ';
//        tmp = tmp->next;
//    }
//    return 0;
//}

