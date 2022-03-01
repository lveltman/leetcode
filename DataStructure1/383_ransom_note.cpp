//
//  383_ransom_note.cpp
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
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> cnt;
        for (int i = 0; i < magazine.size(); ++i)
            ++cnt[magazine[i]];
        for (int i = 0; i < ransomNote.size(); ++i) {
            if (cnt[ransomNote[i]] > 0)
                --cnt[ransomNote[i]];
            else
                return false;
        }
        return true;
    }
};
