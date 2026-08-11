class Solution {
public:
int n,m;

          void  dfs(vector<vector<int>>& heights,int r,int c,vector<vector<int>>&ocean){
                ocean[r][c]=1;
                int sub[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
                for(auto s:sub){
                    int nr=s[0]+r;
                    int nc=s[1]+c;
                if(nr<0 or nc<0 or nr>=n or nc>=m)continue;
                if(ocean[nr][nc])continue;
                if(heights[nr][nc]>=heights[r][c])dfs(heights,nr,nc,ocean);
                }
                
            }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        n=heights.size();        
        m=heights[0].size();
        vector<vector<int>>pa(n,vector<int>(m,0));      
        vector<vector<int>>at(n,vector<int>(m,0)); 

        for(int i=0;i<n;i++){
            dfs(heights,i,0,pa);
            dfs(heights,i,m-1,at);

        }
        for(int i=0;i<m;i++){
            dfs(heights,0,i,pa);
            dfs(heights,n-1,i,at);
        }
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (pa[i][j] && at[i][j])
                    ans.push_back({i, j});
        return ans;

    }
};