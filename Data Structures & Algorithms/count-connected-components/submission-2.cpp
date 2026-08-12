class Solution {
public:
void dfs(vector<vector<int>>& adj ,int node , vector<int> & vis){
            vis[node]=1;
            for(auto c: adj[node]){
                if(!vis[c])dfs(adj,c, vis);
            }
}
    int countComponents(int n, vector<vector<int>>& edges) {
            // int V=n-1;
            vector<vector<int>>adj(n);
            int ans=0;
            
            for(auto a : edges){
                adj[a[0]].push_back(a[1]);
                adj[a[1]].push_back(a[0]);
            }

            vector<int>vis(n,0);

            for(int i=0;i<n;i++){
                if(!vis[i])
                {dfs(adj ,i,vis);
            ans++;}
            }


        return ans;
    }
};
