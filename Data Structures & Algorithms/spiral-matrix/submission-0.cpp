class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     int n=matrix.size();
     int m=matrix[0].size();
     
     int left=0,right=m-1;
     int top=0,bottom=n-1;
     vector<int>a;
     while(top<=bottom and left<=right){
        for(int i=left;i<=right;i++) a.push_back(matrix[top][i]);
        top++;
        for(int i=top;i<=bottom;i++) a.push_back(matrix[i][right]);
        right--;
        if(top>bottom) break;
        for(int i=right;i>=left;i--) a.push_back(matrix[bottom][i]);
        bottom--;
        if(left>right)break;
        for(int i=bottom;i>=top;i--) a.push_back(matrix[i][left]);
        left++;
     }
     

     
     return a;
    }
};