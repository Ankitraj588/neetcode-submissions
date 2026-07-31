class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==target)return m;

          else if(nums[s]<=nums[m]){
            if(nums[m]<target or nums[s]>target)s=m+1;
            else e=m-1;

          }
          else{
            if(nums[m]>target or nums[e]<target)e=m-1;
            else s=m+1;
          }
        }
        return -1;
    }
};
