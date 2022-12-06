#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int INF=1e9+10;
vector<vector<int>> v(1500,vector<int> (1500));
vector<vector<int>> vis(1500,vector<int> (1500));
vector<vector<int>> lev(1500,vector<int> (1500));
int n,m;
vector<pair<int,int>> movements={
    {0,1},{0,-1},{1,0},{-1,0},
    {1,1},{1,-1},{-1,1},{-1,-1},
};
bool isValid(int i,int j)
{
    return i>=0 && j>=0 && i<n && j<m;
}
int bfs()
{
    int mx=0;
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mx=max(mx,v[i][j]);
            }
        } 
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mx==v[i][j])
            {
                q.push({i,j});
                lev[i][j]=0;
                vis[i][j]=1;
            }
        }
    }
    int ans=0;
    while(!q.empty())
    {
        auto val=q.front();
        int v_x=val.first;
        int v_y=val.second;
        q.pop();
        for(auto movement:movements)
        {
            int child_x=movement.first+v_x;
            int child_y=movement.second+v_y;
            if(!isValid(child_x,child_y))   continue;
            if(vis[child_x][child_y])   continue;
            q.push({child_x,child_y});
            lev[child_x][child_y]=lev[v_x][v_y]+1;
            vis[child_x][child_y]=1;
            ans=max(ans,lev[child_x][child_y]);
        }
    }
    return ans;
}
void reset()
{
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vis[i][j]=0;
                lev[i][j]=INF;
            }
        } 
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {  
        cin>>n>>m;
        reset();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>v[i][j];
            }
        } 
        cout<<bfs()<<endl;
    }
    return 0;
}