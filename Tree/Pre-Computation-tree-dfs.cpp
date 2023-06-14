#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
vector<int> graph[15000];
vector<int> height(15000);
vector<int> depth(15000);
// given q queries , q<=10^5
// in each query given v.
// print subtree sum of v and number of even numbers
// in a subree of v
int subTreeSum[15000];
int evenCount[15000];
int val[15000];
void dfs(int vertext,int par)
{
    // subTreeSum[vertext]+=val[vertext]; if value is given
    subTreeSum[vertext]+=vertext;
    if(vertext%2==0) evenCount[vertext]++;
    for(auto child:graph[vertext])
    {
        if(child==par)
            continue;
        depth[child]=depth[vertext]+1;
        dfs(child,vertext);
        height[vertext]=max(height[vertext],height[child]+1);
        subTreeSum[vertext]+=subTreeSum[child];
        evenCount[vertext]+=evenCount[child];
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
    int q;
    cin>>q;
    dfs(1,0);
    for(int i=1;i<=n;i++)
    {
        cout<<subTreeSum[i]<<" "<<evenCount[i]<<endl;
    }
    cout<<"Query "<<endl;
    while(q--)
    {
        int v;
        cin>>v;
        cout<<subTreeSum[v]<<" "<<evenCount[v]<<endl;
    }
    return 0;
}