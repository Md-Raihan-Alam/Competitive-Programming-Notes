#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    //advan
    //not too much space
    //disadvan
    //take O(n) time to check if connected or what is weight
    int n,m;
    cin>>n>>m;
    // vector<int>graph[n+1];
    //if with weight
    vector<pair<int,int>> graph[n+1];
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        int weight;
        cin>>v1>>v2;
        cin>>weight;
        graph[v1].push_back({v2,weight});
        graph[v2].push_back({v1,weight});
    }
    //check data
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        bool found=false;
        for(int i=0;i<graph[a].size();i++)
        {
            if(b==graph[a][i].first)
            {
                cout<<"Connected weight is "<<graph[a][i].second<<endl;
                found=true;
            }
        }
        if(!found)
            cout<<"Not connected"<<endl;
    }
    return 0;
}