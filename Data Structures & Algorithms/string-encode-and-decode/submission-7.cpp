class Solution {
public:

    string encode(vector<string>& strs) {
            string s="";
            for(int i=0;i<strs.size();i++){
                s+=strs[i]+",%#";
            }
            return  s;
    }

    vector<string> decode(string s) {
          vector<string>ans;
          string temp="";
             for(int i=0;i<s.length();i++){
                if(s[i]==',' and s[i+1]=='%' and s[i+2]=='#')
                {
                    i+=2;
                    ans.push_back(temp);
                    temp="";
                }                else {
                    temp+=s[i];
                }
            }
            return ans;
    }
};
