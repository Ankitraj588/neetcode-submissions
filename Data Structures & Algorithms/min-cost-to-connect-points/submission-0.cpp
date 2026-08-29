class dsu{
vector<int>parent,Size;
public:
    dsu(int n){
        parent.resize(n+1);
        Size.resize(n+1,1);
        for(int i=0;i<n+1;i++)parent[i]=i;
    }
    int find(int x){
    if(parent[x]==x)return x;
    return parent[x]=find(parent[x]);
}
bool unite(int u,int v){
    u=find(u);
    v=find(v);
    if(u==v)return false;
    if(Size[u]<Size[v])swap(u,v);
    parent[v]=u;
    Size[u]+=Size[v];
    return true;
}
};


class Solution {
public:

    int minCostConnectPoints(vector<vector<int>>& points) {
        vector<pair<int,pair<int,int>>>edjes(points.size());
        int V=points.size();
        dsu dsu(V);
        for(int i=0;i<V;i++){
            for(int j=i+1;j<V;j++){
                int d=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                edjes.push_back({d,{i,j}});
            }
        }
        sort(edjes.begin(),edjes.end());
        int dist=0;
        // vector<int>vis(V,0);
            for(auto a:edjes){
                auto [d,x]=a;
                auto [u,v]=x;
                if(dsu.unite(u,v))dist+=d;

            }
        return dist;
    }
};
