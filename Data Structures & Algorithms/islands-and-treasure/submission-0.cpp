class Solution {
    private:
    
public:

void solve(vector<vector<int>>& grid,int x,int y,int dist){
        int n = grid.size(), m = grid[0].size();

        // Out of bounds or water
        if (x < 0 || y < 0 || x >= n || y >= m || grid[x][y] == -1) return;

        if (grid[x][y] < dist) return;

        // Update distance
        grid[x][y] = dist;

        // DFS in 4 directions
        solve(grid, x+1, y, dist+1);
        solve(grid, x-1, y, dist+1);
        solve(grid, x, y+1, dist+1);
        solve(grid, x, y-1, dist+1);
    }

    void islandsAndTreasure(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0) solve(grid,i,j,0);
            }
        }
    }
};
