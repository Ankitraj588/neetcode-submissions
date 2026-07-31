class Solution {
public:
    vector<vector<int>> ans;
    vector<int>temp;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
     sort(nums.begin(),nums.end());
     r(nums,target,0);
     return ans;   
    }
    void r(vector<int>a,int t,int s ){
        if(t==0){
            ans.push_back(temp);
            return;
        }
        for(int i=s;i<a.size();i++){
            if(t-a[i]<0)return;
            temp.push_back(a[i]);
            r(a,t-a[i],i);
            temp.pop_back();
        }
    }
};
