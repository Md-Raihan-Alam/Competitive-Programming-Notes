#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+1;
vector<int> graph[N];
vector<int> visited(N,0);

int n,m;
signed main()
{
    cin>>n>>m;
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }
    
}
