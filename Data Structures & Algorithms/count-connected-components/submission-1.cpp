#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        // Build adjacency list
        vector<vector<int>> adj(n);
        for(auto &e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<int> visited(n, 0);
        int components = 0;
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                components++;
                dfs(i, adj, visited);
            }
        }
        return components;
    }
    
private:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& visited){
        visited[node] = 1;
        for(int neighbor : adj[node]){
            if(!visited[neighbor]){
                dfs(neighbor, adj, visited);
            }
        }
    }
};
