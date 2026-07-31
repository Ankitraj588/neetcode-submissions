class Solution {
public:
int n,m;
    int index=0;
    bool exist(vector<vector<char>>& board, string word) {
        n=board.size();
        m=board[0].size();
        int in=0;
        // int a=0;
        vector<vector<int>>vis( n,vector<int>(m,0));
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] and board[i][j]==word[0]){
                if( dfs(board,word,vis,i,j,0))return true;
        }
       }
       }
        return false;
    }
    
    bool dfs(vector<vector<char>>& board, string word,vector<vector<int>>&vis,int r,int c,int i){
        if(word.size()==i)return true;
        if( r<0 or r>=n or c<0 or c>=m )return false;
        if(vis[r][c] or board[r][c]!=word[i])return false;

        vis[r][c]=1;
        index++;
        bool check =dfs(board,word,vis,r+1,c,i+1) ||
        dfs(board,word,vis,r-1,c,i+1) ||
        dfs(board,word,vis,r,c+1,i+1) ||
        dfs(board,word,vis,r,c-1,i+1);
        vis[r][c]=0;
        return check;

    }
};