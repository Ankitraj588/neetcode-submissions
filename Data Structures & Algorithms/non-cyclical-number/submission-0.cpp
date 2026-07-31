class Solution {
public:


           int sq(int n){
            int sum=0;
         while(n){
        int rem=n%10;
            n=n/10;
            sum+=rem*rem;
            }
            return sum;
    }

    bool isHappy(int n) {
        int slow=n;
        int fast=sq(n);
        while(slow!=fast){
            fast=sq(fast);
            fast=sq(fast);
            slow=sq(slow);
        }
        return fast==1;
    }
};
