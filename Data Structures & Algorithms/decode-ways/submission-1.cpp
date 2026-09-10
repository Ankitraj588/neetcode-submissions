#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        if (n == 0 || s[0] == '0') return 0;
        
        
        vector<int> memo(n, -1);
        return dfs(s, 0, memo);
    }

    int dfs(string& s, int i, vector<int>& memo) {
        int n = s.length();
        
       
        if (i == n) return 1;
       
        if (s[i] == '0') return 0;
        
       
        if (memo[i] != -1) return memo[i];

         int ways = dfs(s, i + 1, memo);

            if (i + 1 < n) {
            int combinedValue = (s[i] - '0') * 10 + (s[i+1] - '0');
            if (combinedValue <= 26) {
                ways += dfs(s, i + 2, memo);
            }
        }

        // Save result in cache
        return memo[i] = ways;
    }
};
