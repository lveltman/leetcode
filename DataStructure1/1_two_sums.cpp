////
////  1_two_sums.cpp
////  leetcode
////
////  Created by Lina Veltman on 18.02.2022.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <unordered_map>
//#include <vector>
//
//using namespace std;
//
//
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        unordered_map<int, int> dict;
//        vector<int> res;
//        for (int i = 0; i < nums.size(); ++i) {
//            if (dict.find(target - nums[i]) == dict.end()) {
//                dict[nums[i]] = i;
//            }
//            else {
//                res.emplace_back(dict[target - nums[i]]);
//                res.emplace_back(i);
//            }
//        }
//        return res;
//    }
//};
//
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    vector<int> nums1 = {2,7,11,15};
//    int target = 9;
//    Solution sol;
//    sol.twoSum(nums1, target);
//    return 0;
//}
