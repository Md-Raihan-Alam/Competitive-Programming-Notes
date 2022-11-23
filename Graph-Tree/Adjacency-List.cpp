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
    return 0;
}
// 6 9
// 1 3 4
// 1 5 3
// 3 5 2
// 3 4 7
// 3 6 8
// 3 2 9
// 2 6 1
// 4 6 2
// 5 6 3