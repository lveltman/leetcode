//
//  242_valid_anagram.cpp
//  leetcode
//
//  Created by Lina Veltman on 22.02.2022.
//

#include <stdio.h>
#include <string>
#include <unordered_map>

using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> cnt;
        for (int i = 0; i < s.size(); ++i)
            ++cnt[s[i]];

        for (int i = 0; i < t.size(); ++i) {
            if (cnt[t[i]] > 0)
                --cnt[t[i]];
            else
                return false;
        }
        return true;
    }
};
