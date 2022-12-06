#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
vector<int> g[15000];
bool vis[1500];
//time complexity O(n+v)
void dfs(int vertex)
{
    //Take action on vertex after entering the vertex
    cout<<vertex<<endl;
    vis[vertex]=true;
    for(int child:g[vertex])
    {
        // cout<<"par "<<vertex<<" child "<<child<<endl;
        if(vis[child]) continue;
        //take action on child before entering the child node
        dfs(child);
        //take action on child after exiting child node
    }
    //take action on vertex before exiting the vertex
}
signed main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int s;
    cin>>s;
    dfs(s);
    return 0;
}
// 6 9
// 1 3
// 1 5
// 3 5
// 3 4
// 3 6
// 3 2
// 2 6
// 3 6
// 5 6