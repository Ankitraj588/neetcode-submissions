class PrefixTree {
    struct Trie{
        Trie* child[26];
        bool isEnd;
        Trie(){
            isEnd=false;
            for(int i=0;i<26;i++){
                child[i]=nullptr;
            }
        }
        void insert(string s){
            Trie* curr=this;

        for(int i=0; i<s.length();i++){
           int index=s[i]-'a';
            if(curr->child[index]==nullptr)curr->child[index]=new Trie();
            curr=curr->child[index];
            
            }
            curr->isEnd=true;
        }

    };
    Trie* c;

public:
    PrefixTree() {
        c=new Trie();
    }
    
    void insert(string word) {
        c->insert(word);
        
    }
    
    bool search(string word) {
        Trie* curr=c;
        for(char ch : word)
{
    int index = ch - 'a';

            if (curr->child[index] == nullptr)
                return false;
    curr=curr->child[index];
}        
    return curr->isEnd;
    }
    
    bool startsWith(string prefix) {
        Trie* curr=c;
        for(char ch : prefix)
{
    int index = ch - 'a';

            if (curr->child[index] == nullptr)
                return false;
    curr=curr->child[index];
}        
    return true;
      
    }
};
