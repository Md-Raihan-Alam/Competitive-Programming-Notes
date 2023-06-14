#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<int> graph[15000];
vector<int> par(15000);
void dfs(int vertext,int p=-1)
{
    par[vertext]=p;
    for(int child:graph[vertext])
    {
        if(child==p)
            continue;
        dfs(child,vertext);
    }
}
vector<int> path(int v)
{
    vector<int> ans;
    while(v!=-1)
    {
        ans.push_back(v);
        v=par[v];
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
signed main()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1);
    //parents
    // for(int i=1;i<=13;i++)
    // {
    //     cout<<i<<" "<<par[i]<<endl;
    // }
    int x,y;
    cin>>x>>y;
    vector<int> pathX=path(x);
    vector<int> pathY=path(y);
    int mnLin=min(pathX.size(),pathY.size());
    int lca=-1;
    //check parent for each node
    // for(auto x:pathX)
    //     cout<<x<<" ";
    //     cout<<endl;
    // for(auto y:pathY)
    //     cout<<y<<" ";
    //     cout<<endl;
    // cout<<mnLin<<endl;
    for(int i=0;i<mnLin;i++)
    {
        if(pathX[i]==pathY[i])
        {
            lca=pathX[i];
        }else{
            break;
        }
    }
    cout<<lca<<endl;
}