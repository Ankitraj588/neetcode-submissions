class Solution {
public:
    vector<vector<int>>ans;
    // int n;

    vector<vector<int>> permute(vector<int>& nums) {
    vector<int>vis(nums.size(),0);
        // n=;
        rec(nums,vis);
        return ans;
    }

    vector<int>temp;
    
    void rec(vector<int>a,vector<int>&vis){
        if(temp.size()==a.size()){
            ans.push_back(temp);
            return;
        }
       for(int i=0;i<a.size();i++){
        if(!vis[i]){
            temp.push_back(a[i]);
            vis[i]=1;
            rec(a,vis);
            vis[i]=0;
            temp.pop_back();
        }
       } 

    }
};
