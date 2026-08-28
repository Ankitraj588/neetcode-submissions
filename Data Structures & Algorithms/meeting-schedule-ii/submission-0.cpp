/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
                sort(intervals.begin(), intervals.end(), [](auto& x, auto& y) {
            return x.start < y.start;
        });
        int ans=1;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(const auto& a:intervals){
            if(!pq.empty() and pq.top()<=a.start)pq.pop();
            pq.push(a.end);
        }
        return pq.size();
    }
};
