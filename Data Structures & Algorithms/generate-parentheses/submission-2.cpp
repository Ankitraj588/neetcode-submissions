// class Solution {
// public:
//     bool valid(const string& s) {
//         int open = 0;
//         for (char c : s) {
//             open += (c == '(') ? 1 : -1;
//             if (open < 0) return false;
//         }
//         return open == 0;
//     }

//     void dfs(string s, vector<string>& res, int n) {
//         if (s.length() == 2 * n) {
//             if (valid(s)) res.push_back(s);
//             return;
//         }
//         dfs(s + '(', res, n);
//         dfs(s + ')', res, n);
//     }

//     vector<string> generateParenthesis(int n) {
//         vector<string> res;
//         dfs("", res, n);
//         return res;
//     }
// };
class Solution {
public:
 vector<string>ans;
 string add="",temp;
 void dfs(int n,int l,int r){
// if(temp.length()==2*n){
//     ans.push_back(temp);
//     return;
// }
if(l==n and r==n)
{
    ans.push_back(temp);
    return;
}


// for (int i=0;i<2*n;i++){
//     if(l)
// }

if(l<n)
{
    temp+='(';
dfs(n,l+1,r);
temp.pop_back();

    }


if(r<l){
        temp+=')';
    dfs(n,l,r+1);
            temp.pop_back();
    }
 }
    vector<string> generateParenthesis(int n) {
        for(int i=0;i<n;i++){
            add+="()";
        }
        dfs(n,0,0);
        return ans;
    }
};
