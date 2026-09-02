class Solution {
public:
    bool isHappy(int n) {
     set<int>s;
     while(s.find(n)==s.end())   {
     s.insert(n);
     int sum=0;
     while(n>0){
        int r=n%10;
        n/=10;
        sum+=r*r;
        cout<<sum<<endl;

     }
     if(sum==1)return true;
     n=sum;
     }
    return false;
    }
};
