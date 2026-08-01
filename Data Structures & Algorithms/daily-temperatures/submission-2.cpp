class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n,0);
        vector<int>st;
        st.push_back(0);
        for(int i=0;i<n-1;i++){
            int index=st.back();
            while(temperatures[index]<temperatures[i+1]){
                ans[index]=i+1-index;
                st.pop_back();
                if(st.empty())break;
                index=st.back();
            }
            st.push_back(i+1);

        }
        return ans;
        
    }
};