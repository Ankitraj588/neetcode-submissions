class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int res=0;
        int l=0,maxf=0;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            mp[c]++;
            maxf=max(maxf,mp[c]);
            if((i-l+1)-maxf>k){
                mp[s[l]]--;
                l++;
            }
            res=max(res,i-l+1);
        }
        return res;
    }
};
