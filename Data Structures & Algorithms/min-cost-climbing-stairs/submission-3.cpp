class Solution {
public:
vector<int>cache;
int n;
    int minCostClimbingStairs(vector<int>& cost) {
      n=cost.size();
      cache.resize(n+1,1e9);
    return min(dfs(cost,0),dfs(cost,1));



    }

    int dfs(vector<int>& cost,int i){
        if (i>=n)return 0;
        if(cache[i]!=1e9)return cache[i];
        return cache[i]= cost[i]+min(dfs(cost,i+1),dfs(cost ,i+2));
    }
};
