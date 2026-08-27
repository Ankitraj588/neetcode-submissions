class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        # ans=-1
        n=len(gas)
        tank=0
        si=0
        if (sum(gas)<sum(cost)):
            return -1
        for i in range (n):
           tank+=gas[i]-cost[i]
           if tank<0:
            si=i+1
            tank=0
        return si