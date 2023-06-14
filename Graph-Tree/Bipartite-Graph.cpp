#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N=1e5+1;
vector<int> graph[N];
vector<bool> visited(N,0);
vector<int> color(N,-1);
bool bipart=true;
void bipartiteGraph(int u,int curr)
{
    if(color[u]!=-1 && color[u]!=curr)
    {
        bipart=false;
        return ;
    }
    color[u]=curr;
    if(visited[u])
        return ;
    visited[u]=true;
    for(auto i:graph[u])
    {
        bipartiteGraph(i,curr ^ 1);
    }
}
signed main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            bipartiteGraph(i,0);
        }
    }
    if(bipart)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}