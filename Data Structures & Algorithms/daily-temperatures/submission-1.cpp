class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>st;
        int n=temperatures.size();
        vector<int>ans(n,0);
        for(int i=0;i<temperatures.size();i++){
            if(!st.empty())
            
           { 
            while(!st.empty() && st.top().first<temperatures[i]){
                         auto [x,y]=st.top();st.pop();
                        ans[y]=i-y;
            }
           } 
            st.push({temperatures[i],i});
        }
        return ans;
        
    }
};