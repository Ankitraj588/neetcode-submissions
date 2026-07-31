class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int tempo=1,count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1==nums[i])tempo++;
            else if (nums[i-1]==nums[i])continue;
            else tempo =1;
            count=max(count,tempo);
        }
        return count;
    }
};
