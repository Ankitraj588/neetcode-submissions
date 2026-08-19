class Solution {
public:
    int lengthOfLongestSubstring(string s) {
std::unordered_map<char, int> mp;
        int ans = 0, l = 0;

        for (int i = 0; i < s.size(); i++) {
            // If the character was seen inside or at the current window's start
            if (mp.find(s[i]) != mp.end() && mp[s[i]] >= l) {
                l = mp[s[i]] + 1;
            }
            
            // Record / update the character's last seen 0-based index
            mp[s[i]] = i;
            
            // Calculate the window length [l, i]
            ans = std::max(ans, i - l + 1);
        }

        return ans;  }
};