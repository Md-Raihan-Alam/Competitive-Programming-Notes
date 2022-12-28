#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<int> visited(15000);
vector<int> graph[15001];
//storing connected componenets
vector<vector<int>> cc;
vector<int> currentConnectedComponenets;
void dfs(int vertex)
{
    // cout<<vertex<<endl;
    currentConnectedComponenets.push_back(vertex);
    visited[vertex]=true;
    for(auto child:graph[vertex])
    {
        if(!visited[child])
        {
            dfs(child);
        }
    }
}
signed main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    //count connected componenet, is equal to how many time dfs has been called
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            //storing current connected components
            currentConnectedComponenets.clear();
            dfs(i);
            //pushing currentConnectedComponenent
            cc.push_back(currentConnectedComponenets);
            cnt++;
        }
    }
    cout<<"componenet "<<cnt<<endl;
    //cout<<cc.size()<<endl;
    //shwing connected componenets
    for(auto ccc:cc)
    {
        for(int vertext:ccc)
        {
            cout<<vertext<<" ";
        }
        cout<<endl;
    }
    return 0;
}