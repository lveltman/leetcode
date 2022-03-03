//
//  203_remove_linked_elements.cpp
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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr)
            return head;
        
        ListNode* prevNode = nullptr;
        ListNode* currNode = head;
        while (currNode) {
            if (currNode->val == val) {
                if (prevNode != nullptr) {
                    prevNode->next = currNode->next;
                    delete currNode;
                    currNode = prevNode->next;
                }
                else {
                    head = currNode->next;
                    delete currNode;
                    currNode = head;
                }
            }
            else {
                prevNode = currNode;
                currNode = currNode->next;
            }
        }
        return head;
    }
};


//int main() {
//    Solution sol;
//    ListNode* list = new ListNode();
//    ListNode* currNode = list;
//    for (int i = 0; i < 3; ++i) {
//        currNode->next = new ListNode(i + 1);
//        currNode = currNode->next;
//    }
//    ListNode* res = sol.removeElements(list, 1);
//    ListNode* tmp = res;
//    while (tmp) {
//        cout << tmp->val << ' ';
//        tmp = tmp->next;
//    }
//    return 0;
//}
