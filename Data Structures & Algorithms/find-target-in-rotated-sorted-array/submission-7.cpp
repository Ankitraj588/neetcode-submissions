class Solution {
public:
    int search(vector<int>& nums, int target) {
        int j=nums.size()-1,i=0;
        while(i<=j){
           int  m=i+(j-i)/2;

            if(nums[m]==target)return m;
            else if(nums[j]==target)return j;
            else if(nums[i]==target)return i;


            else if(nums[m]<target){
                if(nums[j]>target or nums[m]>nums[j]) i=m+1;
                else j=m-1;
            }
            else {
                if(nums[i]<target or nums[m]<nums[i])j=m-1;
                else i=m+1;
            }
        }
        return -1;
    }
};
