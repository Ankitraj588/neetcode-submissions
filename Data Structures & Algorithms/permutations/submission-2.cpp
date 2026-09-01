class Solution {
public:
        vector<vector<int>>ans;
        vector<int>d;
        map<int,int>mp;
    void dfs(vector<int>& nums,int i){
            if(d.size()==nums.size()){
                ans.push_back(d);
                return;
            }
            else if(i>nums.size())return;
        for(int k=0;k<nums.size();k++){
            if(k>0 and nums[k-1]==nums[k])continue;
            // if(k==i-1)continue;
            if(mp[nums[k]]==1)continue;
      
            d.push_back(nums[k]);
            mp[nums[k]]=1;
            dfs(nums,k+1);
            mp[nums[k]]=0;
            d.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(nums,0);
        return ans;
    }
};
