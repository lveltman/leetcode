//
//  119_pascals_triangle_ii.cpp
//  leetcode
//
//  Created by Lina Veltman on 05.03.2022.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;


class Solution {
public:
    
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex + 1, 0);
        res[0] = 1;
        for (int i = 1; i < rowIndex + 1; ++i)
            for (int j = i; j >= 1; --j)
                res[j] += res[j - 1];
        return res;
    }
};


//int main() {
//    Solution sol;
//    auto res = sol.getRow(3);
//    return 0;
//}
