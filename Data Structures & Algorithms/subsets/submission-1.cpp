class Solution {
public:
vector<vector<int>>ans;

            vector<int>d;
    void track(vector<int>& nums , int i){

        ans.push_back(d);
        int n=nums.size();
        if(i==n)return;
        for(int k=i;k<n;k++){
                if(k>0 and nums[k-1]==nums[k])continue;
                d.push_back(nums[k]);
                track(nums,k+1);
                d.pop_back();
        }

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        track(nums,0);
        return ans;        
    }
};
