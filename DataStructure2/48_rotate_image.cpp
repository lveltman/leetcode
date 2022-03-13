//
//  48_rotate_image.cpp
//  leetcode
//
//  Created by Lina Veltman on 05.03.2022.
//

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = static_cast<int>(matrix.size());
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < n; ++i) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};


//int main() {
//    Solution sol;
////    vector<vector<int>> inp = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//    vector<vector<int>> inp = { { 5,1,9,11 }, { 2,4,8,10 }, { 13,3,6,7 }, {15,14,12,16} };
//
//    sol.rotate(inp);
//    return 0;
//}
