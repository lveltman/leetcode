//
//  102_binary_tree_level_order_traversal.cpp
//  leetcode
//
//  Created by Lina Veltman on 27.02.2022.
//

#include <stdio.h>
#include <vector>
#include <iostream>
#include <queue>

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root)
            return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.emplace(root);
        
        while (!q.empty()) {
            int limit = (int) q.size();
            vector<int> container;
            for (int i = 0; i < limit; ++i) {
                TreeNode* top = q.front();
                if (top) {
                    container.emplace_back(top->val);
                    q.emplace(top->left);
                    q.emplace(top->right);
                }
                q.pop();
            }
            if (container.size()) {
                res.emplace_back(container);
            }
        }
        return res;
    }
};
