#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
vector<int> graph[150001];
deque<int> temp;
vector<int> visited(150001,0);
bool dfs(int node,int par)
{
    visited[node]=true;
    temp.push_back(node);
    for(int v:graph[node])
        if(visited[v]==false)
        {
            if(dfs(v,node)==true)
                return true;
        }
        else
        if(par!=v)
        {
            temp.push_back(v);
            return true;
        }
    temp.pop_back();
    return false;
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
        temp.clear();
        if(dfs(i,0))
        {
            while(1)
            {
                if(temp.front()==temp.back())
                    break;
                temp.pop_front();
            }
            for(auto x:temp)
                cout<<x<<" ";
            return 0;
        }
    }
    return 0;
}