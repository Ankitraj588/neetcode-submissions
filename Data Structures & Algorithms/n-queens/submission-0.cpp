class Solution {
public:
    vector<vector<string>>ans;
    vector<int>col,nd,pd;
    vector<string>temp;
    // neg diaganoal nd
    vector<vector<string>> solveNQueens(int n) {
        col.resize(n,0);
        nd.resize(2*n,0);
        pd.resize(2*n,0);
        temp.resize(n,string(n,'.'));
        dfs(0,n);
        return ans;
    }
    void dfs(int r,int n){
        if(r==n){
            ans.push_back(temp);
            return;
        }
        for(int c=0;c<n;c++){
            if(col[c] or pd[r+c] or nd[r-c+n])continue;

            col[c]=1;
            pd[r+c]=1;
            nd[r-c+n]=1;
            temp[r][c]='Q';
            dfs(r+1,n);
            col[c]=0;

            pd[r+c]=0;

            nd[r-c+n]=0;
            temp[r][c]='.';
            
        }
        
    }
};