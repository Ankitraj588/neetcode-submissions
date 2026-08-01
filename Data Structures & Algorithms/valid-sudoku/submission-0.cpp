class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            map<char,int >r,c;
            
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    c[board[i][j]]++;
                    if(c[board[i][j]]>1)return false;
                }
                if(board[j][i]!='.'){

                    r[board[j][i]]++;
                    if(r[board[j][i]]>1)return false;
                }
            }
        }

            int sx=0,ex=3,ey=3,sy=0;
            while(ex<10){
              
                sy=0;
                ey=3;
                while(ey<10){
                map<char,int>mp;
            for(int i=sx;i<ex;i++){
            for(int j=sy;j<ey;j++){
            if(board[i][j]!='.'){
                mp[board[i][j]]++;
                if(mp[board[i][j]]>1) return false;
            }}}
              sy=ey;ey+=3;

            
            }
            sx=ex;ex+=3;

            }


        return true;
    }
};