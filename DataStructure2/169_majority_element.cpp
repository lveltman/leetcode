//
//  169_majority_element.cpp
//  leetcode
//
//  Created by Lina Veltman on 03.03.2022.
//

#include <stdio.h>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <utility>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> appears;
        int times_appear = (int) nums.size() >> 1;
        int majority_element = 0;
        for (const auto& n : nums) {
            if (appears.find(n) == appears.end())
                appears.emplace(make_pair(n, 1));
            else
                ++appears[n];
            if (appears[n] > times_appear)
                majority_element = n;
        }
        return majority_element;
    }
};



//int main() {
//    Solution sol;
//    vector<int> nums = {5};
//    int ans = sol.majorityElement(nums);
//    return 0;
//}
