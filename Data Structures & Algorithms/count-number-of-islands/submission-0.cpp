class Solution {
public:
int cols,rows;
    int numIslands(vector<vector<char>>& grid) {
        rows=grid.size();
        cols=grid[0].size();
        int x=0;
        // vector<vector<int>>vis(rows,vector<int>(cols,0));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols ;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    x++;
                }
            }
        }
return x;
    }

    void dfs(vector<vector<char>>& grid,int i ,int  j){
        if(i<0 or j<0 || i>=rows || j>=cols or grid[i][j]=='0')return;
            grid[i][j]='0';
            dfs(grid,i+1,j);
            dfs(grid,i-1,j);
            dfs(grid,i,j+1);
            dfs(grid,i,j-1);
        
    }
};
