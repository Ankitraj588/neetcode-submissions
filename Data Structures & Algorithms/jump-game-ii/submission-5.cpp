class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0; 

        int steps = 0;
        int current_end = 0;
        int farthest = 0;

        
        for (int i = 0; i < n - 1; i++) {
            // Update the absolute furthest index reachable from current options
            farthest = max(farthest, i + nums[i]);

            // If we have reached the end of the current jump's range
            if (i == current_end) {
                steps++;               // We must jump
                current_end = farthest; // Our new range extends to the farthest point

                // Optimization: If the new range can already touch the end, stop early
                if (current_end >= n - 1) break;
            }
        }

        return steps;
    }
};
