//
//  20_valid_parentheses.cpp
//  leetcode
//
//  Created by Lina Veltman on 25.02.2022.
//

#include <stdio.h>
#include <iostream>
#include <unordered_map>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> brackets {
            {'{','}'},
            {'(',')'},
            {'[',']'}
        };
        stack<char> requiredBrackets;
        
        for (int i = 0; i < s.size(); ++i) {
            if (!requiredBrackets.empty() && brackets[requiredBrackets.top()] == s[i])
                requiredBrackets.pop();
            else
                requiredBrackets.push(s[i]);
        }
        return requiredBrackets.empty();
    }
};




//int main() {
//    Solution sol;
//    string s = "()[]{}";
//    bool ans = sol.isValid(s);
//    cout << ans << endl;
//    return 0;
//}
