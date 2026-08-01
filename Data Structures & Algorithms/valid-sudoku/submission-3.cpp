class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
     unordered_map<int ,unordered_set<char>>row,col;
     map<pair<int,int>,unordered_set<char>> box;

               for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') continue;
            
            pair<int,int>p={r/3,c/3};

            if( row[r].count(board[r][c]) or box[p].count(board[r][c]) or col[c].count(board[r][c]) )return false;
            
            row[r].insert(board[r][c]);
            col[c].insert(board[r][c]);
            box[p].insert(board[r][c]);


            }
            
            }
    return true;
    }
};
