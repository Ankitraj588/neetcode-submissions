class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        large=max(piles)
        i=1
        n=len(piles)
        # sum=0
        ans=0
        if n==h :
            return large
        j=large    
        while i<=j:
            m=i+(j-i)//2
            sum=0
            for a in piles:
                sum+=(a+m-1)//m
            if sum>h :
                 i=m+1
            else :
                j=m-1 
                ans=m
        return ans          
