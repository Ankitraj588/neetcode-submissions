class Solution {
public:
    bool isValid(string s) {
        stack<char>mp;
        if(s.length()==1)return false;
        for(char c:s){
            if(c=='{' or c=='(' or c=='[')mp.push(c);
           else  if(mp.empty()) return false;
            else if (c==']' and mp.top()=='[')mp.pop();
            else if (c==')' and mp.top()=='(')mp.pop();
            else if (c=='}' and mp.top()=='{')mp.pop();
            else return false;
        }
        return mp.size()==0;
    }
};