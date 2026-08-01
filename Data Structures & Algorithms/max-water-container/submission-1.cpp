class Solution {
public:
    int maxArea(vector<int>& nums) {
     int a=0;
     int i=0,j=nums.size()-1;
     while(i<j){
        int c=min(nums[i],nums[j])*(j-i);
        if(nums[i]>nums[j])j--;
        else i++;
        a=max(c,a);
     }  
     return a; 
    }
};
