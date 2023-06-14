#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<int> graph[15000];
int depth[15000];
int height[15000];
void dfs(int vertext,int par)
{
    
    for(int child:graph[vertext])
    {
        if(child==par) continue;
        //depth, take action befor entering node
        depth[child]=depth[vertext]+1;
        dfs(child,vertext);
        //height, take action after existing node
        height[vertext]=max(height[vertext],height[child]+1);
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
    dfs(1,0);
    for(int i=1;i<=n;i++)
    {
        cout<<depth[i]<<" "<<height[i]<<endl;
    }
    return 0;
}
// 13
// 1 2
// 1 3
// 1 13
// 2 5
// 3 4
// 5 6
// 5 7
// 5 8
// 8 12
// 4 9
// 4 10
// 10 11