class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
     priority_queue<int>pq;
     for(int s:stones){
        pq.push(s);}
        while(pq.size()>1){
        if(pq.size()>1){
            int a=pq.top();pq.pop();
            int b=pq.top();pq.pop();
            int d=abs(a-b);
            d==0?pq.push(0):pq.push(d);
        }
     }   
     return pq.top();                  
    }
};
