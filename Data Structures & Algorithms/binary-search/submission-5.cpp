class Solution {
public:
    int search(vector<int>& nums, int target) {
        // if
        int s=0;
        int e=nums.size()-1;
        if(e==0)
        {
            if(target==nums[0])return 0;
            else return -1;
        }
        int mid=(s+e)/2;
        // upper bound 
        while(s<e){
            if(target<=nums[mid])e=mid;
            else s=mid+1;
            mid=s+(e-s)/2;
        }
        return (s<=e and nums[s]==target)?s:-1;
    
    }
};
