#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    vector<int> list[n];
    vector<int> indeg(n,0);
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        list[u].push_back(v);
        indeg[v]++;
    }
    queue<int> pq;
    for(int i=0;i<n;i++)
    {
        if(indeg[i]==0)
        {
            pq.push(i);
        }
    }
    while(!pq.empty())
    {
        cnt++;
        int x=pq.front();
        pq.pop();
        cout<<x<<" ";
        for(auto it:list[x])
        {
            indeg[it]--;
            if(indeg[it]==0)
            {
                pq.push(it);
            }
        }
    }
    //4 3
    //0 1
    //1 2
    //2 3

    //3 3
    //0 1
    //1 2
    //2 0
    return 0;
}