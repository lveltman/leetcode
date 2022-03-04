//
//  83_remove_duplicates_from_sorted_list.cpp
//  leetcode
//
//  Created by Lina Veltman on 24.02.2022.
//

#include <stdio.h>
#include <unordered_set>
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* currNode = head;
        ListNode* prevNode = head;
        unordered_set<int> duplicates;
        while (currNode) {
            if (duplicates.count(currNode->val))
                prevNode->next = currNode->next;
            else {
                duplicates.insert(currNode->val);
                prevNode = currNode;
            }
            currNode = currNode->next;
        }
        return head;
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
//    ListNode* res = sol.deleteDuplicates(list);
//    ListNode* tmp = res;
//    while (tmp) {
//        cout << tmp->val << ' ';
//        tmp = tmp->next;
//    }
//    return 0;
//}
