class Solution {
public:
        vector<vector<int>>ans;
        vector<int>d;
        // map<int,int>mp;
    void dfs(vector<int>& nums,int i){
        ans.push_back(d);
        if(i>nums.size())return;
        for(int k=i;k<nums.size();k++){
            if(k>i and nums[k-1]==nums[k])continue;
            d.push_back(nums[k]);
            dfs(nums,k+1);
            d.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        dfs(nums,0);
        return ans;
    }
};
