class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> v(n+1);

       for (auto &t : times) {
         int u = t[0], vv = t[1], wt = t[2];
      v[u].push_back({vv, wt});
    }

        vector<int>mass(n+1,1e9);
        mass[k]=0;

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,k});

        while(!pq.empty()){
        
            auto [wt,node]=pq.top();pq.pop();
           if(wt>mass[node])continue;
            // if(node==n)return wt;

            
            for(auto it :v[node]){
                int adj=it.first,cur_wt=it.second;
                if(wt+cur_wt<mass[adj]){
                    mass[adj]=wt+cur_wt;
                    pq.push({mass[adj],adj});
                }
            }
        }
        int ans=0;
        for(int i=1;i<n+1;i++){
            if(mass[i]==1e9)return -1;
            ans=max(ans,mass[i]);
        }

    
    return ans;
    }
    
};
