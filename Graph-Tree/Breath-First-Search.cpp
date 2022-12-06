#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<int> g[15000];
vector<int> vis(15000);
vector<int> level(15000);
//time complexity O(V+E);v-node,e-edge
void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source]=1;
    while(!q.empty())
    {
        int cur_v=q.front();
        q.pop();
        cout<<cur_v<<" ";
        for(int child:g[cur_v])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=1;
                level[child]=level[cur_v]+1;
            }
        }
    }
}
signed main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<":"<<level[i]<<endl;
    }
    return 0;
}