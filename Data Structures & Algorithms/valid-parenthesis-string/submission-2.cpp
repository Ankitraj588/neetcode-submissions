class Solution {
public:
    bool checkValidString(string s) {
        //  either treat * as a ( )
        stack<char>st;
        stack<char>star;
        // int star=0;
        // int cou=0;
        for(int i=0;i<s.length();i++){

            if(s[i]=='(')st.push(i);
            else if (s[i]=='*')star.push(i);
            else {
                if(!st.empty())
                    st.pop();
                else if(!star.empty())
                    star.pop();
            else return false;
            }     
            }
            while(!st.empty() and !star.empty()){
                if(st.top()>star.top())return false;
                st.pop();
                star.pop();
            }
            cout<< st.size();
            return st.empty();


    }
};
