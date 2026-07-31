class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();


        #define f(i,n) for(int i=0;i<n;i++)

        f(i,n){
            f(j,m){
                if(matrix[i][j]==0){
                    f(a,n)
                    {   if(matrix[a][j]!=0)matrix[a][j]=-111;
                    }
                    f(a,m) if(matrix[i][a]!=0)matrix[i][a]=-111;
                }
            }
        }
        f(i,n){
            f(j,m){
                if(matrix[i][j]==-111 ){
                    matrix[i][j]=0;
                     }
            }
        }
    }
};