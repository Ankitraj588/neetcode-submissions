class Solution:
    def mergeTriplets(self, triplets: List[List[int]], target: List[int]) -> bool:
        x=False
        z=False
        y=False
        for [a,b,c] in triplets:
            x= x | (a==target[0] and b<=target[1] and c<=target[2])  
            y= y | (a<=target[0] and b==target[1] and c<=target[2])  
            z= z | (a<=target[0] and b<=target[1] and c==target[2])  
            if z and x and y :
                return True
        return False