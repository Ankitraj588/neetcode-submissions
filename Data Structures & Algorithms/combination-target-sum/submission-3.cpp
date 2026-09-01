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
      
            d.push_back(nums[k]);
            dfs(nums,target,k,sum+nums[k]);
            d.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        dfs(nums,target ,0 ,0);
        // vector<vector<int>>a;
    //     for(auto v:ans)a.push_back(v);
        return ans;
    }
};
