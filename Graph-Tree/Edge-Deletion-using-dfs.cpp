#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<int> g[15000];
vector<int> subtreeSum(15000,0);
vector<int> val(15000,0);
const int MOD=1e9+7;
void dfs(int vertext,int par)
{
    subtreeSum[vertext]+=val[vertext];
    for(int child:g[vertext])
    {
        if(child==par) continue;
        dfs(child,vertext);
        subtreeSum[vertext]+=subtreeSum[child];

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
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        cin>>val[i+1];
    }
    dfs(1,0);
    int ans=0;
    for(int i=2;i<=n;i++)
    {
        int part1=subtreeSum[i];
        int part2=subtreeSum[1]-part1;
        ans=max(ans,(part1*part2)%MOD);
    }
    cout<<ans<<endl;
    return 0;
}