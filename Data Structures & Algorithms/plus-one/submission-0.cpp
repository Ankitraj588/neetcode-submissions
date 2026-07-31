class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]!=9){
            digits[n-1]+=1;
            return digits;
        }
        vector<int>v;
        int carry=1;
        for(int i=n-1;i>=0;i--){
                if(digits[i]+carry==10){
                    v.push_back(0);
                    carry=1;
                }
                else {
                    v.push_back(digits[i]+carry);
                    carry=0;
                }
                
        }

if(carry!=0)v.push_back(carry);
reverse(v.begin(),v.end());
return v;
    }
};