class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        int count=0;
        int e=0;
         for (const auto& interval : intervals) {
            // If merged is empty or current interval does not overlap with the previous
            if (merged.empty() || merged.back()[1] <= interval[0]) {
                merged.push_back(interval);
            } else {
                // Overlap exists: update the end of the previous interva
                count++;
                merged.back()[1]=min(interval[1],merged.back()[1]);
                // merged.back()[1] = max(merged.back()[1], interval[1]);
            }
 
        }

        return count;
    }
};
