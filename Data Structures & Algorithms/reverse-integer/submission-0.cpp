class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        while(x){
            int r=x%10;
            ans=ans*10+r;
            x=x/10;
        }
        if(ans<INT_MIN or ans>INT_MAX)return 0;
        return ans;
// check for 32 bit integer overflow 
    }
};