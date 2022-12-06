#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int INF=1e9+10;
vector<pair<int,int>> g[15000];
vector<int> level(15000,INF);
int n,m;
int bfs()
{
    deque<int> d;
    d.push_back(1);
    level[1]=0;
    while(!d.empty())
    {
        int cur_v=d.front();
        d.pop_front();
        for(auto child:g[cur_v])
        {
            int child_v=child.first;
            int wt=child.second;
            if(level[cur_v]+wt<level[child_v])
            {
                level[child_v]=level[cur_v]+wt;
                if(wt==1)
                {
                    d.push_back(child_v);
                }else{
                    d.push_front(child_v);
                }
            }
        }
    }
    return level[n]==INF?-1:level[n];
}
signed main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x==y) continue;
        g[x].push_back({y,0});
        g[y].push_back({x,1});

    }
    cout<<bfs()<<endl;
    return 0;
}