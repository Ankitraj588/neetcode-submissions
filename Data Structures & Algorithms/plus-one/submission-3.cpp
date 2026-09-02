class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;

        if(digits[n]!=9){
            digits[n]++;
            return digits;
        }
        int c=1;
        for(int i=n;i>=0;i--){
                int sum=digits[i]+c;
                c=0;
                if(sum>=10)c=1;
                digits[i]=sum%10;
                
        }
        if(digits[0]!=0)
        return digits;
        vector<int>v;
        v.push_back(1);
        for(int& c:digits)v.push_back(c);
        return v;
    }
};
