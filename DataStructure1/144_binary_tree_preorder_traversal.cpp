//
//  144_binary_tree_preorder_traversal.cpp
//  leetcode
//
//  Created by Lina Veltman on 26.02.2022.


#include <stdio.h>
#include <vector>
#include <iostream>
#include <stack>

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

//1. Visit the root.
//2. Traverse the left subtree, i.e., call Preorder(left-subtree)
//3. Traverse the right subtree, i.e., call Preorder(right-subtree)

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if (!root)
            return {};
        TreeNode* currNode = root;
        vector<int> nodes;
        stack<TreeNode*> st;
        st.emplace(root);
        while (!st.empty()) {
            currNode = st.top();
            nodes.emplace_back(currNode->val);
            st.pop();
            if (currNode->right)
                st.emplace(currNode->right);
            if (currNode->left)
                st.emplace(currNode->left);
            
        }
        return nodes;
    }
};
