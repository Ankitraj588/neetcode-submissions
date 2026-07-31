class Solution {
public:
#define pb push_back
vector<vector<int>>ans;
set<vector<int>>shark;
vector<int>tem;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        r(candidates,target,0);
        for(auto k:shark)ans.pb(k);
        
        return ans;
    }
    void r(vector<int>a,int t,int s){
        if(t==0){
            shark.insert(tem);
            return;
        }
        for(int i=s;i<a.size();i++){
            if(t-a[i]<0)return;
            tem.pb(a[i]);
            r(a,t-a[i],i+1);
            tem.pop_back();
        }
    }
};
