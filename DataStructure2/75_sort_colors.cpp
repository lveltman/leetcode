//
//  75_sort_colors.cpp
//  leetcode
//
//  Created by Lina Veltman on 04.03.2022.
//

#include <stdio.h>
#include <vector>

using namespace std;


class Solution {
public:
//Runtime: 4 ms, faster than 46.46% of C++ online submissions for Sort Colors.
//    Memory Usage: 8.3 MB, less than 70.58% of C++ online submissions for Sort Colors.
//    void sortColors(vector<int>& nums) {
//        int cnt0 = 0;
//        int cnt1 = 0;
//        int cnt2 = 0;
//        for (int i = 0; i < nums.size(); ++i) {
//            if (nums[i] == 0)
//                ++cnt0;
//            else if (nums[i] == 1)
//                ++cnt1;
//            else
//                ++cnt2;
//        }
//        int i = 0;
//        while (cnt0) {
//            nums[i] = 0;
//            ++i;
//            --cnt0;
//        }
//        while (cnt1) {
//            nums[i] = 1;
//            ++i;
//            --cnt1;
//        }
//        while (cnt2) {
//            nums[i] = 2;
//            ++i;
//            --cnt2;
//        }
//    }
    
//
//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sort Colors.
//Memory Usage: 8.1 MB, less than 99.60% of C++ online submissions for Sort Colors.
    
    void sortColors(vector<int>& nums) {
        int l = 0;
        int m = static_cast<int>(nums.size() - 1);
        for (int i = 0; i <= m; ++i) {
            if (nums[i] == 0)
                swap(nums[l++], nums[i]);
            else if (nums[i] == 2)
                swap(nums[m--], nums[i--]);
        }
    }
};


//int main() {
//    Solution sol;
//    vector<int> nums = {1, 0, 0, 2, 2, 1, 2, 0, 1};
//    sol.sortColors(nums);
//    
//    return 0;
//}
