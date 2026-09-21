class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        i,n=0,len(intervals)
        if n==1:
            return intervals
        ans=[intervals[0]]    
        for a , b in intervals:
            y=ans[-1][1]
            if a<=y:
                ans[-1][1]=max(y,b)
            else:
                 ans.append([a,b])
        return ans