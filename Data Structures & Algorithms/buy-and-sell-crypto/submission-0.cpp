class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;

        int m=INT_MAX;
        int  j=prices.size();
        if(j==2)
        {if( max(prices[0],prices[1])==prices[0])return 0;
        else return prices[1]-prices[0];
        }

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