#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<int> graph[15000];
int depth[15000];
void dfs(int vertext,int par)
{
    for(int child:graph[vertext])
    {
        if(child==par)
            continue;
        depth[child]=depth[vertext]+1;
        dfs(child,vertext);
    }
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
    dfs(1,-1);
    int mxDepth=01;
    int mxDepthNode;
    for(int i=1;i<=n;i++)
    {
        if(mxDepth<depth[i])
        {
            mxDepth=depth[i];
            mxDepthNode=i;
            depth[i]=0;
        }
    }
    dfs(mxDepthNode,-1);
    mxDepth=-1;
        for(int i=1;i<=n;i++)
    {
        if(mxDepth<depth[i])
        {
            mxDepth=depth[i];
        }
    }
    cout<<mxDepth<<endl;
    return 0;
}