class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area=0,max_ar=0;
        int i=0,j=heights.size()-1;
            // int max_hr,max_hl;
        while(i<j){
            area=min(heights[i],heights[j])*(j-i);
            if(heights[i]>=heights[j])j--;
            else i++;
            max_ar=max(max_ar,area);
        }
        return max_ar;
    }
};
