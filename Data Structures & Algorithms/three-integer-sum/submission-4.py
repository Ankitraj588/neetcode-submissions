class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        res=[]
        i=0 
        n=len(nums)-1
        while i<=n:
            if nums[i]>0 :
                break
            if i>0 and nums[i-1]==nums[i]:
                i+=1
                continue
            l, r = i+1 ,n
            while l<r:

                sum=nums[i]+nums[l]+nums[r]

                if sum>0:
                    r-=1
                elif sum<0:
                    l+=1
                else:
                    res.append([nums[i],nums[l],nums[r]])
                    l+=1
                    r-=1
                    while nums[l]==nums[l-1] and l<r :
                        l+=1
                    while nums[r]==nums[r+1] and l<r :
                        r-=1
            i+=1


        return res


