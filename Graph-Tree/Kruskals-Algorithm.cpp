#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N=1e5+10;
int parent[N],sz[N];
void make(int n)
{
    parent[n]=n;
    sz[n]=1;
}
int fi(int n)
{
    if(parent[n]==n)
        return parent[n];
    return parent[n]=fi(parent[n]);
}
void uni(int a,int b)
{
    a=fi(a);
    b=fi(b);
    if(a!=b)
    {
        if(sz[a]<sz[b])
            swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];
    }
}
signed main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>> edges;//weight,node,node
    for(int i=0;i<m;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back({wt,{u,v}});
    }
    sort(edges.begin(),edges.end());
    for(int i=1;i<=n;i++)
    {
        make(i);
    }
    int total_cost=0;
    for(auto &edge:edges)
    {
        int wt=edge.first;
        int u=edge.second.first,v=edge.second.second;
        if(fi(u)!=fi(v))
        {
            uni(u,v);
            total_cost+=wt;
            cout<<u<<" "<<v<<endl;
        }
    }
    cout<<total_cost<<endl;
    return 0;
}