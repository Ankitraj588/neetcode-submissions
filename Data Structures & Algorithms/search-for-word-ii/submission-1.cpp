class Solution {
public:

struct Trie{
    Trie* child[26];
    string word;
    Trie(){
        word="";
        for(int i=0;i<26;i++)child[i]=nullptr;
    }
};
Trie* root;
void insert(string &w){
    Trie* curr=root;
    for(char c:w){
        int i=c-'a';
        if(!curr->child[i])curr->child[i]=new Trie();
        curr=curr->child[i];
    }
    curr->word=w;
}

    vector<string> ans;
    int n, m;

    void dfs(int i, int j, vector<vector<char>>& board,
             Trie* root) {

        // Out of bounds
        if(i < 0 || i >= n || j < 0 || j >= m)
            return;

        // Character doesn't match
        if(board[i][j] == '#')
            return;

        char ch= board[i][j];
        int index=ch-'a';
        if(!root->child[index])return;

        Trie* next=root->child[index];

        if(next->word!=""){
            ans.push_back(next->word);
            next->word="";
        }


        // Mark current cell as visited
        board[i][j] = '#';

        // Four directions
        dfs(i + 1, j, board, next);
        dfs(i - 1, j, board,  next);
        dfs(i, j + 1, board, next);
        dfs(i, j - 1, board, next);

        // Backtrack
        board[i][j] = ch;
    }

    vector<string> findWords(vector<vector<char>>& board,
                             vector<string>& words) {
                                root=new Trie();
        n = board.size();
        m = board[0].size();

        for(string& s : words) {
            insert(s);}

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {

                    dfs(i, j, board, root);
                
            }
        }

        return ans;
    }
};