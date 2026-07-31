class Solution {
public:
    int trap(vector<int>& height) {
        // int n=height.size();
        // if(n==0)return 0;
        // int mx_ar=0;
        // stack<int>st;
        //     int i=0;
        // while(i<n){
        //    while(!st.empty() and height[i]>=height[st.top()]){
        //     int mid=height[st.top()];
        //     st.pop();
        //     if(!st.empty()){
        //         int r=height[i];
        //         int l=height[st.top()];
        //         int h=min(r,l)-mid;
        //         int w=i-st.top()-1;
        //         mx_ar+=h*w;
        //     }
        //    }

        //    st.push(i);
        //    i++;
        // }


        // return mx_ar;


        int n=height.size();
        if(n==0)return 0;
        int l=0,r=n-1;
        int res=0;
        int l_m=height[l],r_m=height[r];
        while(l<r){
            if(l_m<r_m){
                l++;
                l_m=max(l_m,height[l]);
                res+=l_m-height[l];
            }
            else{
                r--;
                r_m=max(r_m,height[r]);
                res+=r_m-height[r];
            }

        }
        return res;
    }
};
