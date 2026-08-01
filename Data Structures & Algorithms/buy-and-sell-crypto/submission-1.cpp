class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;

        int m=INT_MAX;
        int  j=prices.size();
     
        

        for(int i=0;i<j;i++){
            m=min(m,prices[i]);
            if(m>prices[i])continue;
            for(int k=i+1;k<j;k++){
                if(m>prices[k])continue;
                    p=max(p,prices[k]-m);
            }
        }
        return p;
    }
};