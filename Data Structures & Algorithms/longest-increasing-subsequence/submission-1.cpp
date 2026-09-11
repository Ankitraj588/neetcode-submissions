class Solution {
private:
int n,count;
// vector<vector<int>>memo;
vector<int>memo;

public:

    // int dfs(vector<int>& nums,int in,int current){
    //     if(in==n)return 0;
    //     if(memo[in][current+1]!=-1)return memo[in][current+1];
    //     int skip =dfs(nums,in+1,current);
    //     int take=0;
    //     if(current==-1 or nums[current]<nums[in]){
    //      take =1+dfs(nums,in+1,in);
    //     }
    //     return max(skip,take);
    // }
        int dfs(vector<int>& nums, int i){
            if(memo[i]!=-1)return memo[i];
            int lis=1;
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j])lis=max(lis,1+dfs(nums,j));
            }
            return memo[i]=lis;
        }
    int lengthOfLIS(vector<int>& nums) {
      n=nums.size();
        memo.resize(n,-1);
        count=1;
        for(int i=0;i<n;i++){
            count=max(count,dfs(nums,i));
        }
    //   return  dfs(nums,0,-1);
     return count;
    }
};
