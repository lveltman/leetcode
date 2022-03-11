//
//  701_insert_into_a_binary_search_tree.cpp
//  leetcode
//
//  Created by Lina Veltman on 01.03.2022.
//

#include <stdio.h>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    // recursive
    TreeNode* insertIntoBSTRecursive(TreeNode* root, int val) {
        if (!root)
            return new TreeNode(val);
        
        if (root->val > val)
            root->left = insertIntoBST(root->left, val);
        else
            root->right = insertIntoBST(root->right, val);
        
        return root;
    }
    // iteration
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (!root)
            return new TreeNode(val);
        TreeNode* currNode = root;
        TreeNode* parent = nullptr;
        while (currNode) {
            parent = currNode;
            if (currNode->val > val)
                currNode = currNode->left;
            else
                currNode = currNode->right;
        }
        if (parent->val > val)
            parent->left = new TreeNode(val);
        else
            parent->right = new TreeNode(val);
        
        return root;
    }
};


//int main() {
//    Solution sol;
//    TreeNode* tree = new TreeNode(4);
//    TreeNode* currNode = tree;
//
//    currNode->left = new TreeNode(2);
//    currNode->right = new TreeNode(7);
//    currNode = currNode->left;
//    currNode->left = new TreeNode(1);
//    currNode->right = new TreeNode(3);
//
//
//    TreeNode* res = sol.searchBST(tree, 2);
//    return 0;
//}

