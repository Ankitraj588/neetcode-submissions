class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0;
        int l=0;
        // map<char,int>mp;
        unordered_set<char>mp;


        for(int i=0;i<n;i++) {
            char c=s[i];
            while(mp.find(c)!=mp.end()){
                
                mp.erase(s[l]);
                l++;
            }
            mp.insert(s[i]);
            ans=max(i-l+1,ans);
            
        }
return ans;
    }
};
