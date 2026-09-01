class Solution {
public:
        vector<vector<int>>ans;
        vector<int>d;
    void dfs(vector<int>& nums, int target,int i,int sum){

       if(sum==target)
        {   
            ans.push_back(d);
            return;
        
        }
        for(int k=i;k<nums.size();k++){
            if(sum+nums[k]>target)continue;
            if(k>i and nums[k-1]==nums[k])continue;
      
            d.push_back(nums[k]);
            dfs(nums,target,k+1,sum+nums[k]);
            d.pop_back();
        }
    }
  
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       sort(candidates.begin(),candidates.end());
        dfs(candidates,target,0,0);
        return ans;
    }
};
