class Solution {
public:
int n,m;





    void islandsAndTreasure(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        queue<pair<int,int>>q;
        #define f(i,n) for(int i=0;i<n;i++)

        f(i,n){
            f(j,m){
                if(grid[i][j]==0)
                 q.push({i,j});
                  }
        }

        while(!q.empty()){
            auto [a,b]=q.front();
            q.pop();
            int arr[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
            for(auto x:arr){
                int nr=x[0]+a;
                int nc=x[1]+b;
                if(nr<0 or nc<0 or nr>=n or nc>=m)continue;
                if(grid[nr][nc]==INT_MAX)
                {grid[nr][nc]=grid[a][b]+1;
                q.push({nr,nc});}
            }
        }        
    }

};
