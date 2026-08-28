class Solution {
public:

int accumulate(vector<int>& a){
    int sum=0;
    for(auto  x:a)sum+=x;
return sum;
}
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int sum_g=accumulate(gas);
       int sum_c=accumulate(cost);
       if(sum_c>sum_g)return -1;
       int ans=0;

       int tank=0;
       for(int i=0;i<gas.size();i++){
        tank+=gas[i]-cost[i];
        if(tank<0){
            ans=i+1;
            tank=0;
        }

       }
       return ans;
    }
};
