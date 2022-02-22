////
////  main.cpp
////  leetcode
////
////  Created by Lina Veltman on 17.02.2022.
////
//
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    bool containsDuplicate(vector<int>& nums) {
//        unordered_set<int> duplicates;
//        for (const auto& n : nums) {
//            if (duplicates.count(n))
//                return true;
//            duplicates.insert(n);
//        }
//        return false;
//    }
//};
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    vector<int> nums = {1,2,3,4};
//    Solution sol;
//    bool ans = sol.containsDuplicate(nums);
//    cout << ans << endl;
//    return 0;
//}
