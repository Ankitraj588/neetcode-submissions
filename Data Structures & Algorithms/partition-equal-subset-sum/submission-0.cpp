class Solution {
public:

    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto s:nums)sum+=s;
        if(sum%2==1)return false;
        sum=sum/2;
       
    
        int n=nums.size();
        vector<vector<bool>>dp(n+1,vector<bool>(sum+1,false));
       
        for(int i=0;i<nums.size()+1;i++)dp[i][0]=true;
        
        for(int i=1;i<n+1;i++){
            for(int s=1;s<sum+1;s++){
                if(nums[i-1]<=s)
                {dp[i][s]=dp[i-1][s] or dp[i-1][s-nums[i-1]];}
                else dp[i][s]=dp[i-1][s]; 
            }
        }
            return dp[n][sum];}



};