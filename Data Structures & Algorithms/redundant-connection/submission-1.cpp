class Solution {
public:

    bool dfs(vector<vector<int>>& adj,
             int node,
             int target,
             vector<int>& vis) {

        if (node == target)
            return true;

        vis[node] = 1;

        for (int nei : adj[node]) {

            if (!vis[nei]) {

                if (dfs(adj, nei, target, vis))
                    return true;
            }
        }

        return false;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        int n = edges.size();

        vector<vector<int>> adj(n + 1);

        for (auto edge : edges) {

            int u = edge[0];
            int v = edge[1];

            vector<int> vis(n + 1, 0);

            // Is v already reachable from u?
            if (dfs(adj, u, v, vis)) {
                return edge;
            }

            // No cycle, so add the edge
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        return {};
    }
};
