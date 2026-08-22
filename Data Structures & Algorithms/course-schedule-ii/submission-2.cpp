class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         vector<vector<int>>adj(numCourses);
      vector<int>indegree(numCourses,0);
         for(auto a:prerequisites){
        adj[a[1]].push_back(a[0]);
            indegree[a[0]]++;
         }
        queue<int>q;
      
       for(int i=0;i<numCourses;i++){
            if(indegree[i]==0)q.push(i);
       }


        vector<int>v;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                int x=q.front();q.pop();
                for(auto a: adj[x]){
                    indegree[a]--;
                    if(!indegree[a])
                    {q.push(a);
                    //  vis[a]=1;
                }}
                v.push_back(x);
            }
        }
        if(v.size()==numCourses)return v;
        return {};
    }
};
