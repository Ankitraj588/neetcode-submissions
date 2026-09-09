class Solution {
public:
vector<int>cache;
int n;
    int minCostClimbingStairs(vector<int>& cost) {
      n=cost.size();
      cache.resize(n+1);
      for(int i=2;i<=n;i++){
        cache[i]=min(cache[i-1]+cost[i-1], cache[i-2]+cost[i-2]);
      }
      return cache[n];



    }

    int dfs(vector<int>& cost,int i){
        if (i>=n)return 0;
        if(cache[i]!=1e9)return cache[i];
        return cache[i]= cost[i]+min(dfs(cost,i+1),dfs(cost ,i+2));
    }
};
