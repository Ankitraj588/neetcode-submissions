class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto a: times){
            adj[a[0]].push_back({a[1],a[2]});
        }
    vector<int>dis(n+1,1e9);        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,k});
        dis[k]=0;
        while(!pq.empty()){
            auto [t,node]=pq.top();pq.pop();
            if(t>dis[node])continue;
            for(auto [nei,ne_t]:adj[node]){

                if(t +ne_t < dis[nei]){
                    dis[nei] = ne_t+t;
                    pq.push({dis[nei],nei});
                }
            }
        }
        int ans=-1;
        dis[0]=1;
        for(auto a:dis)
        {
            if(a==1e9)return -1;
            ans=max(ans,a);
        }return ans;
    }
};
