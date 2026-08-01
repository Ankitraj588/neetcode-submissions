class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>sh;
            int a=0,l=0;
        for(int i=0;i<s.length();i++)
{
        while(sh.find(s[i])!=sh.end()){
            sh.erase(s[l]);
            l++;
        }
        sh.insert(s[i]);
        a = max( a , i - l + 1 ) ;
}        
        
        
        return a;
      
    }
};
