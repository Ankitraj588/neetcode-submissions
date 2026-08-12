class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
 vector<vector<int>> adj(numCourses);
        queue<int>q;
        vector<int>indegree(numCourses,0);
        for(auto a:prerequisites)
        {adj[a[1]].push_back(a[0]);
            indegree[a[0]]++;
        }
        for (int i = 0; i < numCourses; i++) {
    if (indegree[i] == 0)
        q.push(i);
}
int count=0;
        while(!q.empty()){
            int cou=q.front();q.pop();
            count++;
            for(auto nei : adj[cou]){
                indegree[nei]--;
                if(indegree[nei]==0)q.push(nei);
            }
        }
        return count==numCourses;
    }
};
