class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        ans=[]
        mp = {}
        n=len(s)
        f=0
        ss=0
        for i in range(0,n):
            mp[s[i]] = i
        # ss=""
        for i in range (0,n):
            f=max(f,mp[s[i]])
            if f==i:
                ans.append((i-ss+1))
                ss=i+1
        return ans