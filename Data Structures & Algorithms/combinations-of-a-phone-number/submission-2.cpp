class Solution {
public:
unordered_map<char,string>mp;
vector<string>ans;
int x=0;
string temp="";
void dfs(string& d , int i){

    if(temp.size()==d.size()){
        ans.push_back(temp);
        return ;
    }

    // if(i>d.size())return;

    for(int j=i;j<d.size();j++){
        string k = mp[d[j]];
        for(int x=0;x<k.size();x++){
            temp+=k[x];
            dfs(d,j+1);
            temp.pop_back();
        }

    }
}

    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return {};
char a='a';
for(char c='2';c<='6';c++){
   string p="";
   int i=3;
    while(i--){p+=a;
    a++;}
    // cout<<p<<" * ";
    mp[c]=p;
}
mp['7']="pqrs";
mp['8']="tuv";
mp['9']="wxyz";

dfs(digits,0);
    return ans;
    }
};
