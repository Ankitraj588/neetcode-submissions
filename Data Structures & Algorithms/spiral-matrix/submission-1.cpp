class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     int sc=0,sr=0,er=matrix.size()-1,ec=matrix[0].size()-1;
     int n=er+1,m=ec+1;
     vector<int>v;
     while(sc<=ec and sr<=er){
        for(int i=sc;i<=ec;i++){
                v.push_back(matrix[sr][i]);
        }
        sr++;
        for(int i=sr;i<=er;i++){
                v.push_back(matrix[i][ec]);
        }
        ec--;
                for(int i=ec;i>=sc;i--){
                v.push_back(matrix[er][i]);
        }
        er--;
                for(int i=er;i>=sr;i--){
                v.push_back(matrix[i][sc]);
        }
        sc++;

     }
     cout<<v.size()<<n*m;   
     while(v.size()>n*m)v.pop_back();
     return v;
    }
};
