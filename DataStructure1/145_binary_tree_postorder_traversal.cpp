//
//  145_binary_tree_postorder_traversal.cpp
//  leetcode
//
//  Created by Lina Veltman on 26.02.2022.
//

#include <stdio.h>
#include <iostream>
#include <stack>
#include <vector>

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
    vector<int> postorderTraversal(TreeNode* root) {
        if (!root)
            return {};
        TreeNode* currNode = root;
        vector<int> nodes;
        stack<TreeNode*> st;
        while (currNode || !st.empty()) {
            if (currNode) {
                st.emplace(currNode);
                nodes.emplace(nodes.begin(), currNode->val);
                currNode = currNode->right;
            }
            else {
                currNode = st.top();
                st.pop();
                currNode = currNode->left;
            }
        }
        return nodes;
    }
};


//int main() {
//    Solution sol;
//    TreeNode* tree = new TreeNode();
//    TreeNode* currNode = tree;
//    for (int i = 0; i < 3; ++i) {
//        currNode->left = new TreeNode(i + 1);
//        currNode->right = new TreeNode(i + 6);
//        currNode = currNode->left;
//    }
//    currNode = tree;
//    for (int i = 0; i < 3; ++i) {
//        currNode->right = new TreeNode(i + 1);
//        currNode = currNode->left;
//    }
//    sol.postorderTraversal(tree);
//    return 0;
//}

