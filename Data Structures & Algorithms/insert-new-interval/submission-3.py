class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        ans=[]
        # for a,b in intervals
        i,n=0,len(intervals)
        a,b=newInterval[0],newInterval[1]
        while i<n and intervals[i][1]<a  :
            ans.append(intervals[i])
            i+=1
        while  i<n and intervals[i][0]<=b :
            a=min(a,intervals[i][0])
            b=max(b,intervals[i][1])
            i+=1
        ans.append([a,b])
        while i<n:
            ans.append(intervals[i])
            i+=1
        return ans
