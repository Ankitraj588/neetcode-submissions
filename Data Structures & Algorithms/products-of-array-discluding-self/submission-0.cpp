class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            int prod=1,c=0;
    vector<int>v(nums.size(),0);
     for(int nums:nums)
    {
        if(nums==0)c++;
        else prod*=nums;
            if(c>1)return v;
    }
    if(c==1)
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0)v[i]=prod;
    }
    else
     for(int i=0;i<nums.size();i++){
        v[i]=prod/nums[i];
    }
    return v;
    }
};
