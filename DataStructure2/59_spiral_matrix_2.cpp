//
//  59_spiral_matrix_2.cpp
//  leetcode
//
//  Created by Lina Veltman on 05.03.2022.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        int value = 1;
        int i = 0;
        while (value <= n * n) {
            int j = i;
            while (j < n - i) // left to right
                res[i][j++] = value++;
            j = i + 1;
            while (j < n - i) // top to bottom
                res[j++][n - 1 - i] = value++;
            j = n - 2 - i;
            while (j > i) // right to left
                res[n - 1 - i][j--] = value++;
            j = n - 1 - i;
            while (j > i) // bottom to top
                res[j--][i] = value++;
            ++i;
        }
        return res;
    }
};

//
//int main() {
//    Solution sol;
//    auto res = sol.generateMatrix(3);
//    return 0;
//}
