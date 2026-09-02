class Solution {
public:
   vector<vector<string>>ans;
    vector<string>d;
            bool isPal(string& s,int l,int r){
                if(r>=s.length())return false;
                while(l<r){
                    if(s[l]!=s[r])return false;
                    l++;
                    r--;
                }
                return true;
            }
            

        void dfs( string& s,int i ,int j ){
            if(j>=s.size()){
                if(i==j)ans.push_back(d);
                return;
            }
            if(isPal(s,i,j)){
                d.push_back(s.substr(i,j-i+1));
                dfs(s,j+1,j+1);
                d.pop_back();
            }
            dfs(s,i,j+1);
        }

    vector<vector<string>> partition(string s) {
        dfs(s,0,0);
        return ans;
    }
};