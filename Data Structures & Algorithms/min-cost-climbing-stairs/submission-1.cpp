class Solution {
public:
    // int dp[1005]; // memo array
    vector<int>dp;
    int solve(vector<int>& cost, int i) {
        if (i >= cost.size()) return 0; // reached the top
        if (dp[i] != -1) return dp[i];
        
        // choose 1 step or 2 steps
        return dp[i] = cost[i] + min(solve(cost, i + 1), solve(cost, i + 2));
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        dp.resize(1005,-1);
        // We can start from step 0 or step 1
        return min(solve(cost, 0), solve(cost, 1));
    }
};
