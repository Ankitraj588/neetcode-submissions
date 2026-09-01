class Solution {
public:
    int findMin(vector<int> &nums) {
     int i=0;
     int j=nums.size()-1;
     int ans=nums[0];
        while(i<=j){
      if (nums[i]<nums[j]){
        return min(ans,nums[i]);
      }
      int m=(i+j)/2;
      ans=min(ans,nums[m]);
      if(nums[m]>=nums[i])
      {i=m+1;
      }else{ 
    
        j=m-1;

      }
     }
     return ans;
    }
};
