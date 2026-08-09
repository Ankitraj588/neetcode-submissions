class Trie{
  public:
    Trie* child[26];
    bool isEnd;
    Trie(){
        isEnd=false;
        for(int i=0;i<26;i++){
            child[i]=nullptr;
        }
    }
};
class WordDictionary {
 Trie* root;
public:
    WordDictionary() {
  root=new Trie();    
    }
    
    void addWord(string word) {
         Trie* curr = root;

            for (int i = 0; i < word.length(); i++) {
                int index = word[i] - 'a';

                if (curr->child[index] == nullptr) {
                    curr->child[index] = new Trie();
                }

                curr = curr->child[index];
            }

            curr->isEnd = true;
    }
     bool dfs(Trie* curr, string& word, int i) {

        // Entire word processed
        if(i == word.length())
            return curr->isEnd;

        // Normal character
        if(word[i] != '.') {

            int index = word[i] - 'a';

            if(curr->child[index] == nullptr)
                return false;

            return dfs(curr->child[index], word, i + 1);
        }

        // Wildcard '.'
        for(int j = 0; j < 26; j++) {

            if(curr->child[j] != nullptr) {

                if(dfs(curr->child[j], word, i + 1))
                    return true;
            }
        }

        return false;
    }
    bool search(string word) {
          return dfs(root,word,0);
    }
};
