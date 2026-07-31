class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();

            int s=0,e=n*m-1;
            while(s<=e){
                int mid=(s+e)/2;
                int r=mid/m,c=mid%m;

                if(matrix[r][c]<target)s=mid+1;
                else if (matrix[r][c]>target)e=mid-1;
                else return true;
          }
return false;
        // int r=0,c=m-1;
        // while(r<n and c>=0){
        //     if(matrix[r][c]>target){
        //         c--;
        //     }
        //     else if(matrix[r][c]==target)return true;
        //     else r++;
        // }   
        // return false;
    }
};
