class Solution {
public:
    int findMin(vector<int> &nums) {
     int i=0;
     int j=nums.size()-1;
    //  int ans=nums[0];
            while(i<j){
                int m=(i+j)/2;
                if(nums[j]>nums[m])j=m;
                else i=m+1;
            }
     return nums[i];
    }
};
