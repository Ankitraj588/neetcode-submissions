class Solution {
public:
int n;
vector<int>help;
    int rob(vector<int>& nums) {
            n=nums.size();
            if(n==1)return nums[0];
            help.resize(n+1,-1);
            int a=dfs(nums,0,n-1);
            fill (help.begin(),help.end(),-1);
            int b=dfs(nums,1,n);
            return max(a,b);
    }
int dfs(vector<int>& nums ,int i ,int n){
    // what to do here babbjiiii
    if(i>=n)return 0;
    if(help[i]!=-1)return help[i];
    return help[i]= max(dfs(nums,i+1,n),nums[i]+dfs(nums,i+2,n));
}


};
// circle me baitha to ky ukhand lkega bhai 
