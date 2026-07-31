class Solution {
public:
    bool isAnagram(string s, string t) {
     int n=s.length();   
     int m=t.length(); 
     if(n!=m)return false;
     unordered_map<char,int>a,b;
     
     for(int i=0;i<n;i++){
        a[s[i]]++;
     }
     for(int i=0;i<m;i++){
        b[t[i]]++;
     }

     if(a.size()!=b.size()) return false;


     for(auto [x,y]:a){
        if(b[x]!=y)return false;
     }
     return true;

    }
};
