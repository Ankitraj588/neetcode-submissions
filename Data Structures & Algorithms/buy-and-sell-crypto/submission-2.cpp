class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;

        int m=prices[0];
        int  j=prices.size();

        for(auto s:prices){
            p=max(p,s-m);
                m=min(m,s);
        }
        return p;
    }
};