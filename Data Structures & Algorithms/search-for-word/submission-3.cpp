class Solution {
public:
int n,m;
bool ans=false;
void dfs(vector<vector<char>>& board, string word,int i,int j,int p){
    
    if(word.size()==p){
        ans=true;
        return;
    }
    if(i<0 or j<0 or i>=n or j>=m or board[i][j]!=word[p])return;
    char temp=board[i][j];
    board[i][j]='*';
    dfs(board,word,i+1,j,p+1);
    dfs(board,word,i-1,j,p+1);
    dfs(board,word,i,j+1,p+1);
    dfs(board,word,i,j-1,p+1);
board[i][j]=temp;
}
    bool exist(vector<vector<char>>& board, string word) {
         n=board.size();
         m=board[0].size();
        int i=0,j=0;
        while(i<n){
            j=0;
            while(j<m){
                if(word[0]==board[i][j])dfs(board,word,i,j,0);
            j++;
            }

            i++;
        }
        return ans;
    }
};
