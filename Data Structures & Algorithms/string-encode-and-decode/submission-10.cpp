class Solution {
public:

    string encode(vector<string>& strs) {
            string x="1@";
           string ans="";
           int i=1;
           for(string &s:strs){
            
            ans+=to_string(s.length())+'%'+s;
           } 
           return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string t="";
            for(int i=0;i<s.length();i++){
                
                int a=i;
                while(s[i]!='%')i++;

                int l=stoi(s.substr(a,i-a));

                string p=s.substr(i+1,l);
                i=i+l;
                ans.push_back(p);
            
            
            }
            return ans;

    }
};
