class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;
            s.push(0);
            int n=temperatures.size();
            vector<int> daily(n);
        for(int i=1;i<temperatures.size();i++){
            
             while(!s.empty() and temperatures[s.top()]<temperatures[i]){
                        daily[s.top()]=i-s.top();
                        s.pop();
            }
       
            
            s.push(i);
        }

        return daily;
    }
};
