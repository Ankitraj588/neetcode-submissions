class Solution:

    def bs(self, a : List[int] , target :int ,start: int )->int:
        s=start 
        e=len(a)-1
        while s<=e:
            m=s+(e-s)//2;
            if a[m]==target:
                return m
            elif a[m]<target:
                s=m+1
            else:
                e=m-1
        return -1            
    
    
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        i=0
        j=len(numbers)-1
        ans=[]
        while i<=j:
            x=target-numbers[i]
            a=self.bs(numbers ,x,i+1)
            if a!=-1:
                return [i+1,a+1]

            i+=1

        return []