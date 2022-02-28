//
//  36_valid_sudoku.cpp
//  leetcode
//
//  Created by Lina Veltman on 21.02.2022.
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
    bool isValidSudoku(vector<vector<char>>& board) {
        int numRows = (int) board.size();
        int numCols = (int) board[0].size();
        unordered_map<char, int> rows;
        unordered_map<char, int> cols;
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                if (board[i][j] == '.')
                    continue;
                ++cols[board[i][j]];
                if (cols[board[i][j]] > 1)
                    return false;
            }
            cols.clear();
        }
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                if (board[j][i] == '.')
                    continue;
                ++rows[board[j][i]];
                if (rows[board[j][i]] > 1)
                    return false;
            }
            rows.clear();
        }
        for (int i = 0; i < numRows - 2; i += 3) {
            for (int j = 0; j < numCols - 2; j += 3) {
                for (int n = i; n < i + 3; ++n) {
                    for (int m = j; m < j + 3; ++m) {
                        if (board[n][m] == '.')
                            continue;
                        ++rows[board[n][m]];
                        if (rows[board[n][m]] > 1)
                            return false;
                    }
                }
                rows.clear();
            }
        }
        return true;
    }
};
