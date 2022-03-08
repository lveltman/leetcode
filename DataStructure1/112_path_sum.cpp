//
//  112_path_sum.cpp
//  leetcode
//
//  Created by Lina Veltman on 28.02.2022.
//

#include <stdio.h>
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root)
            return false;
        targetSum -= root->val;
        if (!root->left && !root->right) {
            if (targetSum == 0)
                return true;
            else
                return false;
        }
        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
    }
};


//int main() {
//    Solution sol;
//    TreeNode* tree = new TreeNode(1);
//    TreeNode* currNode = tree;
//
//    currNode->left = new TreeNode(2);
//    currNode->right = new TreeNode(3);
//    currNode = currNode->left;
//    currNode->left = new TreeNode(11);
//    currNode = currNode->left;
//    currNode->left = new TreeNode(7);
//    currNode->right = new TreeNode(2);
//
//    currNode = tree->right;
//    currNode->left = new TreeNode(13);
//    currNode->right = new TreeNode(4);
//
//    int targetSum = 5;
//    bool res = sol.hasPathSum(tree, targetSum);
//    return 0;
//}
