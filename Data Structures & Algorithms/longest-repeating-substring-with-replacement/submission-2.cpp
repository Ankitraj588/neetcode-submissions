class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int ans=0;
        unordered_set<char> mp (s.begin(),s.end());
        for(char c:mp){
            int count =0,l=0;
            for(int r=0;r<n;r++){
                if(s[r]==c){
                    count++;
                }
                while((r-l+1)-count>k){
                    if(s[l]==c)count--;
                l++;
                }
                ans=std::max(ans,r-l+1);
            }

        }
        return ans;
    }
};