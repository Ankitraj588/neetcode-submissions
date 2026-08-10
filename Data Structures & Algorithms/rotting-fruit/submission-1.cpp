class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        #define f(i,n) for(int i=0;i<n;i++)
            int fresh=0;
        f(i,n){
            f(j,m){
                if(grid[i][j]==2)
                 q.push({i,j});
                 else if (grid[i][j]==1)fresh++;}
        }

        if(fresh==0)return 0;
            int t=-1;

        while(!q.empty()){
                       
            t++;
            int s=q.size();
            for(int i=0;i<s;i++){
                 auto [a,b]=q.front();
            q.pop();
            int arr[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
            for(auto x:arr){
                int nr=x[0]+a;
                int nc=x[1]+b;
                if(nr<0 or nc<0 or nr>=n or nc>=m or grid[nr][nc]==0)continue;

                if(grid[nr][nc]==1)
                {grid[nr][nc]=2;
                q.push({nr,nc});
                fresh--;
                }
            }
            }

        }
        return fresh==0? t:-1;

    }
};