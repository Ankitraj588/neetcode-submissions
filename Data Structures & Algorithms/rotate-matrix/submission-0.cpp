class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
            vector<vector<int>>ans(n,vector<int>(n));

                #define f(i,n) for(int i=0;i<n;i++)

            f(i,n){
                f(j,n){
                        ans[j][n-1-i]=matrix[i][j];
                }
            }
            matrix=ans; 
    }
};
