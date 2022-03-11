//
//  15_3sum.cpp
//  leetcode
//
//  Created by Lina Veltman on 03.03.2022.
//

#include <stdio.h>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (nums.size() < 3) {
            return {};
        }
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> res;
        set<vector<int>> triplets;
        for (int i = 0; i < nums.size(); ++i) {
            int left = i + 1;
            int right = static_cast<int>(nums.size() - 1);
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (!sum)
                    triplets.insert({ nums[i], nums[left++], nums[right--] });
                else if (sum < 0)
                    ++left;
                else // sum > 0
                    --right;
            }
        }
        for (const auto& triplet : triplets)
            res.emplace_back(triplet);
        return res;
    }
};

//
//int main() {
//    vector<int> nums1 = {-1, 0, 1, 2, -1, -4};
//    Solution sol;
//    auto res = sol.threeSum(nums1);
//    return 0;
//}
