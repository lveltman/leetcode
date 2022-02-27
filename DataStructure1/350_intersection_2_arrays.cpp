//
//  350_intersection_2_arrays.cpp
//  leetcode
//
//  Created by Lina Veltman on 19.02.2022.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;


class Solution {
public:
   void solver(const vector<int>& smaller, const int n, const vector<int>& bigger, const int m, vector<int>& res) {
       unordered_map<int, int> map;
       for (int i = 0; i < n; ++i) {
           if (map.find(smaller[i]) == map.end())
               map[smaller[i]] = 1;
           else
               ++map[smaller[i]];
       }
       for (int i = 0; i < m; ++i) {
           if (map.find(bigger[i]) != map.end() && map[bigger[i]] > 0) {
               res.emplace_back(bigger[i]);
               --map[bigger[i]];
           }
       }
   }
   
   vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       int n = (int) nums1.size();
       int m = (int) nums2.size();
       vector<int> res;
       
       if (n < m) {
           solver(nums1, n, nums2, m, res);
           return res;
       }
       solver(nums2, m, nums1, n, res);
       return res;
   }
};


int main(int argc, const char * argv[]) {
   // insert code here...
   vector<int> nums1 = {2,1};
   vector<int> nums2 = {1,2};
   Solution sol;
   vector<int> res = sol.intersect(nums1, nums2);
   for (const auto& r : res) {
       cout << r << ' ';
   }
   return 0;
}
