class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n=len(nums)
        left=[0]*n
        right=[0]*n
        res=[0]*n
        left[0]=right[n-1]=1
        i=1
        while i<n:
            left[i]=left[i-1]*nums[i-1]
            i+=1
        # i=n-2
        for x in range (n-2,-1,-1):
            i=x
            right[i]=right[i+1]*nums[i+1]

        for i in range (0,n):
            res[i]=left[i]*right[i]
        return res