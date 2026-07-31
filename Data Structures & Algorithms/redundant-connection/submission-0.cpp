class Solution {
public:
    vector<int> v;

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<vector<int>> adj(n + 1);     // nodes are 1..n
        vector<int> visited(n + 1, 0);

        // Build adjacency list incrementally and check for cycle
        for (auto &e : edges) {
            int u = e[0], v = e[1];

            // Add edge temporarily
            adj[u].push_back(v);
            adj[v].push_back(u);

            fill(visited.begin(), visited.end(), 0);
            if (hasCycle(u, -1, adj, visited)) {
                return e;  // this edge creates the cycle
            }
        }

        return {};
    }

    bool hasCycle(int node, int parent, vector<vector<int>>& adj, vector<int>& visited) {
        visited[node] = 1;

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                if (hasCycle(neighbor, node, adj, visited)) return true;
            } else if (neighbor != parent) {
                // Visited neighbor that is not parent → cycle detected
                return true;
            }
        }

        return false;
    }
};
