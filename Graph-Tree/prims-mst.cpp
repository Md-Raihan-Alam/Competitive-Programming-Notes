#include<bits/stdc++.h>
using namespace std;
int n,m;
int cost=0;
const int N=1e5+3;
vector<vector<int>> graph[N];
vector<int> dist(N),parent(N);
vector<int> visited(N);
const int INF=1e9;
void primeMST(int source)
{
    for(int i=0;i<n;i++)
    {
        dist[i]=INF;
    }
    set<vector<int>> s;
    dist[source]=0;
    s.insert({0,source});
    while(!s.empty())
    {
        auto x=*(s.begin());
        s.erase(x);
        visited[x[1]]=true;
        int u=x[1];
        int v=parent[x[1]];
        int w=x[0];
        cout<<u<<" "<<v<<" "<<w<<endl;
        cost+=w;
        for(auto it:graph[x[1]])
        {
            if(visited[it[0]])
                continue;;
            if(dist[it[0]]>it[1])
            {
                s.erase({dist[it[0]],it[0]});
                dist[it[0]]=it[1];
                s.insert({dist[it[0]],it[0]});
                parent[it[0]]=x[1];
            }
        } 
    }
}
signed main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    primeMST(0);
    cout<<cost<<endl;
}
// 4 5
// 0 1 10
// 1 2 15
// 0 2 5
// 3 1 2
// 3 2 40
// =
// 0 0 0
// 2 0 5
// 1 0 10
// 3 1 2
// 17