#include<bits/stdc++.h>
using namespace std;
vector<int> g[10000];
vector<int> v(10000,0);
vector<int> d(10000,0);
vector<int> p(10000,-1);
void bfs(int i)
{
    queue<int> q;
    q.push(i);
    v[i]=1;
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        for(auto x:g[f])
        {
            if(!v[x])
            {
                q.push(x);
                v[x]=1;
                d[x]=d[f]+1;
                //for path, from where did you came
                p[x]=f;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(0);
    int mx=0;
    for(int i=0;i<n;i++)
    {
        cout<<d[i]<<" ";
        mx=max(mx,d[i]);
    }
    cout<<endl;
    int dest=5;
    if(v[dest]==0)
    {
        cout<<"NO path"<<endl;
    }else{
        vector<int> path;
        int x=dest;
        while(x!=-1)
        {
            path.push_back(x);
            x=p[x];
        }
        reverse(path.begin(),path.end());
        for(int i=0;i<path.size();i++)
            cout<<path[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// 6
// 6
// 0 1
// 0 2
// 0 3
// 2 4
// 2 5
// 3 5