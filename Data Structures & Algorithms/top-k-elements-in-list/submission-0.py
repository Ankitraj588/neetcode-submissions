class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        a={}
        ans=[]
        nums.sort()
        for x in nums:
            a[x]=a.get(x,0)+1
        for (x,y) in a.items():
            # if a[x] >= k:
                ans.append([y,x])
        ans.sort()
        res=[]
        while len(res)<k:
            res.append(ans.pop()[1])
        return res
    