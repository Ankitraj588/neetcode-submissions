class Solution {
public:
    int findMin(vector<int> &nums) {
     int i=0;
     int j=nums.size()-1;
     int ans=INT_MAX;
     while(i<=j){
         int    m=i+(j-i)/2;
            if(nums[i]<nums[j])
            {ans=min(ans,nums[i]);
            break;
            }
            ans=min(ans,nums[m]);
             if(nums[i]<=nums[m] )i=m+1;
            else   j=m-1;
     }   
     return ans;
    }
};
