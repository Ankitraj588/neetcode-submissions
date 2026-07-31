class Solution {
public:
    int pac,atl;
    int n,m;
    void dfs(vector<vector<int>>& heights,int i,int j, int h){
            if(i<0 or j<0){
                pac=1; return;
        } 
             if(i>=n or j>=m){atl=1;return;}
            if(heights[i][j]>h)return;

            int temp =heights[i][j];
            heights[i][j]=INT_MAX;

                dfs(heights,i+1,j,temp);
                dfs(heights,i-1,j,temp);
                dfs(heights,i,j+1,temp);
                dfs(heights,i,j-1,temp);

            heights[i][j]=temp;
    }
    
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
         n=heights.size();
         m=heights[0].size();

        vector<vector<int>>ans;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                pac=0,atl=0;
                dfs(heights,i,j,INT_MAX);
                if(pac and atl)ans.push_back({i,j});
            }
        }
    return ans;

    }
};
