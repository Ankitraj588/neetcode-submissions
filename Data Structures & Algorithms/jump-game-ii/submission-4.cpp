class Solution {
public:
    int jump(vector<int>& nums) {
        int i=0,j=nums.size();
        int steps=0;
if(j==1){
    return 0;
}
        while(i<j){
            if(nums[i]==0)return 0;
            if(nums[0]>=j-1)return 1;
           steps++;
            int a=i;
            int n=nums[a];
            int m=-1;
            for(int x=a;x<=a+n; x++){
                if(nums[x]+x>=j-1)return steps+1;
                if(nums[x+nums[x]]==0)continue;
                if(nums[x]>m){
                    m=nums[x];
                    i=x+nums[x];
                }
                // m=max(nums[x],m);
            }
            
        }
        return steps;
    }
};
