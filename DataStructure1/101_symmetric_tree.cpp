//
//  101_symmetric_tree.cpp
//  leetcode
//
//  Created by Lina Veltman on 27.02.2022.
//

#include <stdio.h>
#include <iostream>

using namespace std;


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
    bool isSymmetric(TreeNode* root) {
        if (!root || (!root->left && !root->right))
            return true;
        
        return mirror(root->left, root->right);
    }
    
    bool mirror(TreeNode* leftNode, TreeNode* rightNode) {
        if (!leftNode && !rightNode)
            return true;
        if ((leftNode && !rightNode) || (!leftNode && rightNode))
            return false;
        if (leftNode->val != rightNode->val)
            return false;
        return mirror(leftNode->left, rightNode->right) &&
        mirror(leftNode->right, rightNode->left);
    }
};
