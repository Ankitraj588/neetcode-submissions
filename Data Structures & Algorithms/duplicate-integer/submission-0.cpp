class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>a;
        for(auto aa:nums){
            a.insert(aa);
        }
        return a.size()!=nums.size();
    }
};