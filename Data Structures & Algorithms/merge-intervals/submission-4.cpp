class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;

        for (const auto& interval : intervals) {
            // If merged is empty or current interval does not overlap with the previous
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            } else {
                // Overlap exists: update the end of the previous interval
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        return merged;
    }
};