class Solution {
vector<vector<string>>ans;
public:
vector<int>col,pd,nd;
vector<string>temp;


void dfs(int i,int n){
    if(i==n){
        ans.push_back(temp);
        return;
    }
    for(int c=0;c<n;c++){
    if(col[c] or pd[i+c] or nd[i-c+n])continue;
    col[c]=1;
    pd[i+c]=1;
    nd[i-c+n]=1;
    temp[i][c]='Q';
    dfs(i+1,n);
    col[c]=0;
    pd[i+c]=0;
    nd[i-c+n]=0;
    temp[i][c]='.';

    }
}
    vector<vector<string>> solveNQueens(int n) {
    col.resize(n,0);
    pd.resize(2*n,0);
    nd.resize(2*n,0);
        temp.resize(n,string(n,'.'));
        dfs(0,n);
       return ans;
    }
};
