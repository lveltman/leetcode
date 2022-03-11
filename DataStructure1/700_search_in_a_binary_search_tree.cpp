//
//  700_search_in_a_binary_search_tree.cpp
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
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root && root->val != val)
            root = val < root->val ? root->left : root->right;
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
