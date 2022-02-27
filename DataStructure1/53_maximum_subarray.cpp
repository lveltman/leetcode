//
//  day1_2.cpp
//  leetcode
//
//  Created by Lina Veltman on 17.02.2022.
//

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
   int maxSubArray(vector<int>& nums) {
       int size = (int) nums.size();
       int sum = 0;
       int ans = nums[0];
       for (int i = 0; i < size; ++i) {
           sum += nums[i];
           if (nums[i] > sum)
               sum = nums[i];
           ans = max(ans, sum);
       }
       return ans;
   }
};


int main(int argc, const char * argv[]) {
   // insert code here...
   vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
   Solution sol;
   int ans = sol.maxSubArray(nums);
   cout << ans << endl;
   return 0;
}
