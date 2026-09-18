class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        m=prices[0]
        ans=-1
        for x in prices:
            m=min(x,m)
            ans=max(ans,abs(m-x))
        return ans