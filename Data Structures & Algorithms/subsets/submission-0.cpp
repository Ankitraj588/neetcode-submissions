class Solution {
public:
    vector<vector<int>>v;
    vector<vector<int>> subsets(vector<int>& nums) {
        rec(nums,0);
        return v;
    }
        vector<int>temp;
    void rec(vector<int>& nums,int n){
        if(n==nums.size())
        {v.push_back(temp);
        return;}
        rec(nums,n+1);
        temp.push_back(nums[n]);
        rec(nums,n+1);
        temp.pop_back();
        }

    
};