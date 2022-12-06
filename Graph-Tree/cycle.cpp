#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
vector<int> visited(15000);
vector<int> graph[15000];
bool dfs(int vertext,int par)
{
    visited[vertext]=1;
    bool isLoppExits=false;
    for(auto child:graph[vertext])
    {
        if(visited[child] && child==par) continue;
        if(visited[child]) return true;
        isLoppExits |= dfs(child,vertext);
    }
    return isLoppExits;
}
signed main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    bool foundLoop=false;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]) continue;
        if(dfs(i,0))
        {
            foundLoop=true;
            break;
        }
    }
    cout<<foundLoop<<endl;
    return 0;
}