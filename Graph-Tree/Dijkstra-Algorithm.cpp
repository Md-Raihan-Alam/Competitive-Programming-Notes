#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N =1e5+10;
const int INF=1e9+10;
vector<pair<int,int>> g[N];//node first, weight second
vector<int> vis(N,0);
vector<int> dist(N,INF);
void dijkstra(int source)
{
    set<pair<int,int>> s;//weight first,node second
    s.insert({0,source});
    dist[source]=0;
    while(s.size()>0)
    {
        auto node=*s.begin();
        int v=node.second;
        int v_dist=node.first;
        s.erase(s.begin());
        if(vis[v]) continue;
        vis[v]=1;
        for(auto child:g[v])
        {
            int child_v=child.first;
            int wt=child.second;
            if(dist[v]+wt<dist[child_v])
            {
                dist[child_v]=dist[v]+wt;
                s.insert({dist[child_v],child_v});

            }
        }
    }
}
signed main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y,wt;
        cin>>x>>y>>wt;
        g[x].push_back({y,wt});
        // g[y].push_back({x,wt}); if the graph is undirected
    }
    //n1=target k=from
    int n1,k;
    cin>>n1>>k;
    dijkstra(k);
    for(int i=1;i<=n;i++)
    {
        if(dist[i]==INF)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<dist[n1]<<endl;
    //check all distance
    // for(int i=1;i<n;i++)
    // {
    //     cout<<dist[i]<<" ";
    // }
    return 0;
}