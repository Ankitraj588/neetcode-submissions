class Solution {
public:

int n,m,a=0;
void dfs(vector<vector<int>>& grid,int i,int j){
    if(i<0 || i>=n || j<0 || j>=m)return;
    if(grid[i][j]==0)return;
    // if(grid[i][j]==1)
    a++;
    grid[i][j]=0;
    dfs(grid,i-1,j);
    dfs(grid,i+1,j);
    dfs(grid,i,j-1);
    dfs(grid,i,j+1);
}



    int maxAreaOfIsland(vector<vector<int>>& grid) {
             n=grid.size();
             m=grid[0].size();
            int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)if(grid[i][j]==1){
                a=0;
                dfs(grid,i,j);
            ans=max(a,ans);}
        }
        return ans;
    }
};