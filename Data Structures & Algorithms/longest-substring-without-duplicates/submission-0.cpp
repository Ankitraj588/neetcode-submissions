class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0,t=0;
        map<char,int>mp;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(mp.count(c)==1 and mp[c]>=t){
                t=mp[c]+1;
            }
            mp[c]=i;
            ans=max(ans,i-t+1);
        }
        return ans;
    }
};
