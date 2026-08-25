class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN,sum=0;
        for(auto a:nums){
            if(sum<0){
                sum=0;
            }
            sum+=a;

            ans=max(sum,ans);
        }
        return ans;
    }
};
