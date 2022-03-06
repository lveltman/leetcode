//
//  94_binary_tree_inorder_traversal.cpp
//  leetcode
//
//  Created by Lina Veltman on 26.02.2022.
//

#include <stdio.h>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


//1. Traverse the left subtree, i.e., call Inorder(left-subtree)
//2. Visit the root.
//3. Traverse the right subtree, i.e., call Inorder(right-subtree)

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        TreeNode* currNode= root;
        stack<TreeNode*> st;
        while (currNode || !st.empty()) {
            while (!currNode) {
                st.emplace(currNode);
                currNode = currNode->left;
            }
            currNode = st.top();
            nodes.emplace_back(currNode->val);
            st.pop();
            currNode = currNode->right;
        }
        return nodes;
    }
};
