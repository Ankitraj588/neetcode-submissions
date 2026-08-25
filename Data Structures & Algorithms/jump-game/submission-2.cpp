class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_reach = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            // If the current index is beyond the maximum reach, we are stuck
            if (i > max_reach) {
                return false;
            }
            // Update the furthest index we can safely reach
            max_reach = max(max_reach, i + nums[i]);
            
            // Optimization: If we can already reach or exceed the last index, return true
            if (max_reach >= n - 1) {
                return true;
            }
        }
        
        return false;
    }
};
