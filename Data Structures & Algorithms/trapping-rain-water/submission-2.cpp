class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty())return 0;

        int tr=0;
        int i=0; 
        int n=height.size();

        vector<int>lm(n),rm(n);
        lm[0]=height[0];
        for(int i=1;i<n;i++){
            lm[i]=max(lm[i-1],height[i]);
        }

        rm[n-1]=height[n-1];
        for (int i=n-2;i>=0;i--){
            rm[i]=max(rm[i+1],height[i]);
        }
        for(int i=0;i<n;i++){
            tr+=min(lm[i],rm[i])-height[i];
        }
return tr;



        return tr;
    }
};
