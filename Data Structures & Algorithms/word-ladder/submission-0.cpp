class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
 unordered_set<string>vis(wordList.begin() , wordList.end());
 if(!vis.count(endWord))return 0;

    queue<string>q;
    q.push(beginWord);
    int l=1;
    while(!q.empty()){
        int siz=q.size();
        for(int i=0;i<siz;i++){

        string s=q.front();q.pop();
        if(s==endWord)return l;
        for(int j=0;j<s.size();j++){
            char org=s[j];
            for(char c='a' ; c<='z';c++){
                    s[j]=c;
                    if(vis.count(s))
                    {q.push(s);
                    vis.erase(s); }           }
            s[j]=org;
        }
        }
        l++;

    }
    return 0;

    }
};
