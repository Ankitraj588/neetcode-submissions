class Solution {
public:

    double power(double x, int n){
        if(n==0)return 1.0;
        double ans=1.0;
        if(n>0){
            while(n){
                ans*=x;
                n--;
            }
        }
        else {
             while(n!=0){
                ans=ans/x;
                n++;
            }
        }
        return ans;
    }


    double myPow(double x, int n) {
       return power(x,n); 
    }
};
