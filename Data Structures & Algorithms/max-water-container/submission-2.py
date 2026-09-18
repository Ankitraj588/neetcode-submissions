class Solution:
    def maxArea(self, heights: List[int]) -> int:
        i=0
        j=len(heights)-1
        area=-1
        while i<j:
            if heights[i]<=heights[j]:
                x=heights[i]*(j-i)
                area=max(area,x)
                i+=1
            else: 
                x=heights[j]*(j-i)
                area=max(area,x)
                j-=1
        return area
