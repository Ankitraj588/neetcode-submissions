#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool match_first = false;
        bool match_second = false;
        bool match_third = false;
        
        for (const auto& t : triplets) {
            // STEP 1: Skip the triplet if any element exceeds the target
            if (t[0] > target[0] || t[1] > target[1] || t[2] > target[2]) {
                continue; 
            }
            
            // STEP 2: Record which positions match our target values
            if (t[0] == target[0]) match_first = true;
            if (t[1] == target[1]) match_second = true;
            if (t[2] == target[2]) match_third = true;
            
            // Optimization: If all three slots are satisfied, we can stop early
            if (match_first && match_second && match_third) {
                return true;
            }
        }
        
        return match_first && match_second && match_third;
    }
};
