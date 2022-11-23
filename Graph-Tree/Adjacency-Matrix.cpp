#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main()
{
    //advan
    // can check data instatly, like if connected, what is weight
    //disadvantage
    // step 1 can't store to much 
    int n,m;
    cin>>n>>m;
    vector<vector<int>> graph(n+1,vector<int>(n+1));
    for(int i=0;i<n+1;i++)
        for(int j=0;j<n+1;j++)
            graph[i][j]=0;
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        int weight;
        cin>>v1>>v2;
        cin>>weight;
        //if undirected, directed then work on that way and value 1 will be weight if weight is given
        // graph[v1][v2]=1;//if weight is given then it will be in the place of 1
        // graph[v2][v1]=1;//as indirected
        //with weight
        //graph[v1][v2]=weight
        graph[v1][v2]=weight;
        graph[v2][v1]=weight;
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