#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        // Quick check: number of edges must be n-1
        if(edges.size() != n-1) return false;
        
        // Build adjacency list
        vector<vector<int>> adj(n);
        for(auto &e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<int> visited(n, 0);
        if(hasCycle(0, -1, adj, visited)) return false;
        
        // Check connectivity: all nodes must be visited
        for(int i=0;i<n;i++){
            if(!visited[i]) return false;
        }
        
        return true;
    }
    
private:
    bool hasCycle(int node, int parent, vector<vector<int>>& adj, vector<int>& visited){
        visited[node] = 1;
        for(int neighbor : adj[node]){
            if(!visited[neighbor]){
                if(hasCycle(neighbor, node, adj, visited)) return true;
            } else if(neighbor != parent){
                // Visited neighbor that is not parent -> cycle
                return true;
            }
        }
        return false;
    }
};
