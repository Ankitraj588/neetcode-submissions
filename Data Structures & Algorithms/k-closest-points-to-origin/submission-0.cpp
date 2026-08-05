// class Solution {
// public:
//     vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
//         priority_queue<pair<int,vector<int>>>pq;
//         for(auto a :points){
//             int d=a[0]*a[0] +a[1]*a[1];
//             pq.push({d,a});
//             if(pq.size()>k)pq.pop();
//         }
//                 vector<vector<int>> result;
//         while(!pq.empty()){
//             result.push_back(pq.top().second);
//             pq.pop();
//         }
        
//         return result;
//     }
// };


class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Corrected the priority queue type declaration
        priority_queue<pair<int, vector<int>>> pq; 
        
        for(auto& a : points){
            int d = a[0] * a[0] + a[1] * a[1];
            pq.push({d, a}); // Added missing semicolon
            
            if(pq.size() > k) {
                pq.pop();
            }
        }
        
        // Collect the results from the max-heap
        vector<vector<int>> result;
        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        
        return result;
    }
};
