class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>temp;
        int n=matrix.size();
        for(int j=0;j<n;j++){
            vector<int>col;
        for(auto i=n-1;i>-1;i--){
            col.push_back(matrix[i][j]);
        }
        temp.push_back(col);
        }
        matrix=temp;
    }
};
