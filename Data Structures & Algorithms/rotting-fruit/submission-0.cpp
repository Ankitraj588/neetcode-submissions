class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;

        int ans=0;
        
        int fresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){q.push({i,j});}
                else if (grid[i][j]==1)fresh++;
            }
        }
        if(fresh==0)return 0;

        // int disr[4]={-1,0,0,1};
        // int disc[4]={0,-1,1,0};
        // // int ans=0;
        // while(!q.empty()){
        //     int r=q.front().first.first;
        //     int t=q.front().second;
        //     int c=q.front().first.second;
        //     ans=max(ans,t);
        //     for(int i=0;i<4;i++){
        //         int nr=r+disr[i];
        //         int nc=c+disc[i];
        //         if(nr>=0 and nr<n and nc>=0 and nc<m and grid[nr][nc]==1 and visit[nr][nc]!=2){
        //             q.push({{nr,nc},t+1});
        //             visit[nr][nc]=1;
        //         }
        //     }
        // }
        //  for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(grid[i][j]==1 and visit[i][j]!=2)return -1;
        //     }
        // }
        // return ans;
        int time =0;
        vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while (fresh > 0 && !q.empty()) {
            int length = q.size();
            for (int i = 0; i < length; i++) {
                auto curr = q.front();
                q.pop();
                int r = curr.first;
                int c = curr.second;

                for (const auto& dir : directions) {
                    int row = r + dir.first;
                    int col = c + dir.second;
                    if (row >= 0 && row < grid.size() &&
                        col >= 0 && col < grid[0].size() &&
                        grid[row][col] == 1) {
                        grid[row][col] = 2;
                        q.push({row, col});
                        fresh--;
                    }
                }
            }
            time++;
        }
        return fresh == 0 ? time : -1;
    }
};