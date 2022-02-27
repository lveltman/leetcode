//
//  121_besttime_buy_sell_stock.cpp
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
   int maxProfit(vector<int>& prices) {
       int profit = 0, diff = 0;
       int min = INT_MAX;
       for (int i = 0; i < prices.size(); ++i) {
           if (prices[i] < min)
               min = prices[i];

           diff = prices[i] - min;
           if (profit < diff)
               profit = diff;
       }
       return profit;
   }
};

int main(int argc, const char * argv[]) {
   // insert code here...
   vector<int> nums1 = {7,1,5,3,6,4};
//    vector<int> nums1 = {7,6,4,3,1};
//    vector<int> nums1 = {2,5,1,3};
   Solution sol;
   int res = sol.maxProfit(nums1);
   
   cout << res << endl;
   
   return 0;
}
