//
//  226_invert_binary_tree.cpp
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
    TreeNode* invertTree(TreeNode* root) {
        if (!root)
            return root;
        if (!root->left && !root->right)
            return root;
        
        TreeNode* tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
        return root;
    }
};


//int main() {
//    Solution sol;
////    TreeNode* tree = new TreeNode(4);
////    TreeNode* currNode = tree;
////
////    currNode->left = new TreeNode(2);
////    currNode->right = new TreeNode(7);
////    currNode = currNode->left;
////    currNode->left = new TreeNode(1);
////    currNode->right = new TreeNode(3);
////    currNode = tree->right;
////    currNode->left = new TreeNode(6);
////    currNode->right = new TreeNode(9);
//    
//    TreeNode* tree = new TreeNode(1);
//    TreeNode* currNode = tree;
//
////    currNode->left = new TreeNode(1);
//    currNode->right = new TreeNode(2);
//
//
//    TreeNode* res = sol.invertTree(tree);
//    return 0;
//}
