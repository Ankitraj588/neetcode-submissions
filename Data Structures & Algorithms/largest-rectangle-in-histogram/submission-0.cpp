class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
       int n=heights.size();
        if(n==1)return heights[0];
        int area=INT_MIN; 
        for(int i=0;i<n;i++){
                int a=heights[i];
                area=max(area,heights[i]);
                for(int j=i+1;j<n;j++){
                    if(heights[j]==0)area=max(area,a*(j-i));
                    a=min(a,heights[j]);
                    area=max(area,a*(j-i+1));
                }
        }
        return area;
    }
};