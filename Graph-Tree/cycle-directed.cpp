#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+1;
vector<int> graph[N];
vector<int> visited(N,0);
vector<int> st(N,0);
bool cycle(int vertext)
{
    st[vertext]=1;
    if(!visited[vertext])
    {
        visited[vertext]=true;
        for(auto i:graph[vertext])
        {
            if(!visited[i] and cycle(i))
            {
                return true;
            }
            if(st[i])
                return true;
        }
    }
    st[vertext]=false;
    return false;
}
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
    bool cl=false;
    for(int i=0;i<n;i++)
    {
        if(!visited[i] and cycle(i))
        {
            cl=true;
        }
    }
    if(cl)
        cout<<"Found"<<endl;
    else
        cout<<"Not found"<<endl;
    return 0;
}
//4 3
//0 1
//1 2
//2 1
//true

//4 2
//0 1
//2 3
//false