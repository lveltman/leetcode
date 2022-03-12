//
//  56_merge_intervals.cpp
//  leetcode
//
//  Created by Lina Veltman on 04.03.2022.
//

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        vector<int> tmp = intervals[0];
        for (int i = 1; i < intervals.size(); ++i) {
            if (tmp[1] >= intervals[i][0]) {
                tmp[1] = max(tmp[1], intervals[i][1]);
            }
            else {
                res.emplace_back(tmp);
                tmp = intervals[i];
            }
        }
        res.emplace_back(tmp);
        return res;
    }
};


//int main() {
//    Solution sol;
//    vector<vector<int>> intervals = {{15,18},{2,6},{8,10}, {1,3}};
//    intervals = sol.merge(intervals);
//    return 0;
//}
