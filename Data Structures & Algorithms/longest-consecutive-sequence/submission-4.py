class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums.sort()
        n=len(nums)
        if n==0:
            return 0
        i=1
        ans=1
        x=1
        while i<n:
            if nums[i-1]==nums[i]:
                i+=1
                continue
            if nums[i-1]+1==nums[i]:
                ans+=1
                print(ans)
            else:
                ans=1
            x=max(ans,x)
            i+=1
        return x 