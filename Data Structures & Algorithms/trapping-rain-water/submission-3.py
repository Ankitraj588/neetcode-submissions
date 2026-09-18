class Solution:
    def trap(self, height: List[int]) -> int:
        i=0
        n=len(height)-1
        l=height[i]
        r=height[n]
        area=0
        while i<n:
            if l<r:
                i+=1
                l=max(l,height[i])
                area+=l-height[i]
            else :
                n-=1
                r=max(r,height[n])
                area+=r-height[n]
        return area