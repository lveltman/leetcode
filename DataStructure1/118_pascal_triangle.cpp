//
//  118_pascal_triangle.cpp
//  leetcode
//
//  Created by Lina Veltman on 20.02.2022.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for (int i = 1; i <= numRows; ++i) {
            vector<int> values;
            int value = 1;
            for (int j = 1; j <= i; ++j) {
                values.emplace_back(value);
                value = value * (i - j) / j;
            }
            res.emplace_back(values);
        }
        return res;
    }
};


