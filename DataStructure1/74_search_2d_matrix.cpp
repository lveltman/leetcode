
  74_search_2d_matrix.cpp
  leetcode

  Created by Lina Veltman on 21.02.2022.


#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int numRows = (int) matrix.size();
        int numCols = (int) matrix[0].size();
        vector<int> mat;
        for (int i = 0; i < numRows; ++i)
        {
            for (int j = 0; j < numCols; ++j)
            {
                mat.emplace_back(matrix[i][j]);
            }
        }
        int left = 0, right = numCols * numRows - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (mat[mid] == target)
                return true;
            else if (mat[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return false;
    }
};
