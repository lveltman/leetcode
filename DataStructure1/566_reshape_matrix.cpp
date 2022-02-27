//
//  566_reshape_matrix.cpp
//  leetcode
//
//  Created by Lina Veltman on 20.02.2022.
//

#include <stdio.h>

#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = (int) mat.size();
        int cols = (int) mat[0].size();
        int x = 0, y = 0;
        if (rows * cols != r * c)
            return mat;
        vector<vector<int>> newMat(r, vector<int> (c, 0));
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                newMat[x][y] = mat[i][j];
                if (y == c - 1) {
                    y = 0;
                    ++x;
                }
                else
                    ++y;
            }
        }
        return newMat;
    }
};



int main(int argc, const char * argv[]) {
    // insert code here...
    vector<vector<int>> nums1 = {{1,2},{3,4},{5,6}};
    Solution sol;
    vector<vector<int>> res = sol.matrixReshape(nums1,1,6);
    return 0;
}
