#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
int max(int a,int b){
    return a>b?a:b;
}
    vector<int> partitionLabels(string s) {
       vector<int>ans;
       unordered_map<char,int>m;
   int n=s.length();
       for (int i=0;i<n;i++)m[s[i]]=i;
       int st=0,e=0;
       for (int i=0;i<n;i++){
            e=max(e,m[s[i]]);
            if(e==i){
                ans.push_back(e-st+1);
                st=i+1;
            }
       }
       return ans;
    }
};
