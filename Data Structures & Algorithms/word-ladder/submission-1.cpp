class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int  count=1;
        unordered_set<string>s(wordList.begin(),wordList.end());
       queue<string>q;
       q.push(beginWord);

       while(!q.empty()){
        int sz=q.size();
        while(sz--){
        string start=q.front();
        q.pop();
        if(start==endWord)return count;
        for(int i=0;i<start.length();i++){
            char place=start[i];
            for(char c='a';c<='z';c++){
                start[i]=c;
                if(s.count(start))
                {q.push(start);
                s.erase(start);        
                    }
            }
            start[i]=place;
        }
                    }count++;
       }
       return 0;
    }
};
