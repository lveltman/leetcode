//
//  136_single_number.cpp
//  leetcode
//
//  Created by Lina Veltman on 03.03.2022.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int min_number = 30000;
        unordered_map<int, int> duplicates;
        
        for (const auto& n : nums)
            ++duplicates[n];
        
        for (auto iter : duplicates) {
            if (iter.second < 2)
                min_number = iter.first;
        }
        return min_number;
    }
};



//int main() {
//    Solution sol;
//    vector<int> nums = {2, 1, 2};
//    int ans = sol.singleNumber(nums);
//    return 0;
//}
