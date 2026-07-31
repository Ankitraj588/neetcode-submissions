class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // set<vector<int>>ans;
        vector<vector<int>>ans;
        solve(nums,ans,0);
        // for(auto x:ans)a.push_back(x);/
        return ans;
    }
    vector<int>temp;
    void solve(vector<int>nums,vector<vector<int>>&ans,int n){
        ans.push_back(temp);

        for(int i=n;i<nums.size();i++){
            if(n<i and nums[i]==nums[i-1])continue;
            temp.push_back(nums[i]);
            solve(nums,ans,i+1);
            temp.pop_back();
        }
        // if(n==nums.size()){
        //     // sort(temp.begin(),temp.end());
        //     ans.insert(temp);
        //     return;
        // }
        // solve(nums,ans,n+1);
        // temp.push_back(nums[n]);
        // solve(nums,ans,n+1);
        // temp.pop_back();

    }
};