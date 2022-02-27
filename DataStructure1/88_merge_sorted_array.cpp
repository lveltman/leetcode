//
//  88_merge_sorted_array.cpp
//  leetcode
//
//  Created by Lina Veltman on 18.02.2022.
//


#include <stdio.h>
#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>

using namespace std;


class Solution {
public:
   void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       if (n == 0)
           return;
       
       if (m == 0) {
           nums1 = nums2;
           return;
       }
       
       int j = 0, i = 0, k = 0;
       vector<int> tmp1(m, 0);
       for (int t = 0; t < m; ++t) {
           tmp1[t] = nums1[t];
       }
       vector<int> tmp2 = nums2;
       
       while (i < m && j < n) {
           if (tmp1[i] <= tmp2[j]) {
               nums1[k] = tmp1[i];
               ++i;
           }
           else {
               nums1[k] = tmp2[j];
               ++j;
           }
           ++k;
       }
        while (i < m) {
            nums1[k] = tmp1[i];
            ++k;
            ++i;
       }
       while (j < n) {
           nums1[k] = tmp2[j];
           ++k;
           ++j;
       }
   }
};


int main(int argc, const char * argv[]) {
   // insert code here...
   vector<int> nums1 = {1, 2, 3, 0, 0, 0};
   vector<int> nums2 = {2, 5, 6};
   Solution sol;
   sol.merge(nums1, nums1.size() - nums2.size(), nums2, nums2.size());
   return 0;
}
