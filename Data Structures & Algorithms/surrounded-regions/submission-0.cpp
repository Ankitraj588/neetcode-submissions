class Solution {
public:
int n,m;
      void dfs(vector<vector<char>>& board , int r ,int c){
        if(r<0 or c<0 or r>=n or c>=m or board[r][c]!='O') return ;
        board[r][c]='T';
        dfs(board,r+1,c);
        dfs(board,r-1,c);
        dfs(board,r,c+1);
        dfs(board,r,c-1);
      }
    void solve(vector<vector<char>>& board) {
        n=board.size();
        m=board[0].size();
        #define  f(i,n )  for(int i=0;i<n;i++)

        f(i,n){
            f(j,m) {
 if(board[i][j]=='O'  && i==0 or j==0 or i==n-1 or j==m-1  )dfs(board,i,j);
            } }

        f(i,n){
            f(j,m) {
                if(board[i][j]=='O' )board[i][j]='X';
                else if (board[i][j]=='T')board[i][j]='O';
            }}
    }
    
};
