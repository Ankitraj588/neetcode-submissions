class Solution {
public:
    bool isPalindrome(string s) {
        string test="";
            int i=0;
            int n=s.length();
            while(i<n){ 
                if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z') or(s[i]>='0' and s[i]<='9'))
                 test+=tolower(s[i]);
                i++;
            }
            
            return test==string(test.rbegin(),test.rend());
    }
};
