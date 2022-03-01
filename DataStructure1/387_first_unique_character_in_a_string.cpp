//
//  387_first_unique_character_in_a_string.cpp
//  leetcode
//
//  Created by Lina Veltman on 22.02.2022.
//

#include <stdio.h>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;


class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> repets;
        for (int i = 0; i < s.size(); ++i) {
            if (repets.find(s[i]) != repets.end())
                ++repets[s[i]];
            else
                repets[s[i]] = 1;
        }
        for (int i = 0; i < s.size(); ++i) {
            if (repets[s[i]] == 1)
                return i;
        }
        return -1;
    }
};

//int main() {
//    Solution sol;
//    string s = "aabb";
//    sol.firstUniqChar(s);
//    return 0;
//}
