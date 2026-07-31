class KthLargest {
public:
int a;
priority_queue<int,vector<int>,greater<int>>pq;
    KthLargest(int k, vector<int>& nums) {
        for(int num:nums){
            pq.push(num);
            if(pq.size()>k)pq.pop();
        }
     
      a=k;  
    }
    
    int add(int val) {
     pq.push(val);
     if(pq.size()>a)pq.pop();
     return pq.top();
     }

};
