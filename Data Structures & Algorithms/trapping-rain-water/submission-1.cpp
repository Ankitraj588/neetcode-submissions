class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty())return 0;

        int tr=0;
        int i=0; 
        int n=height.size();
        for(int i=0;i<height.size();i++){
            int lm=height[i];
            int rm=height[i];

            for(int j=0;j<i;j++){
                lm=max(lm,height[j]);
            }
            for(int j=i+1;j<n;j++){
                rm=max(rm,height[j]);
            }

            tr+=min(rm,lm)-height[i];




        }
        return tr;
    }
};
