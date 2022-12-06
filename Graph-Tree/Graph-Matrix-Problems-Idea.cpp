#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
//matrix dfs=i,j
void dfs(int i,int j,int initialColor,int newColor,vector<vector<int>>& image)
{
    //matrix work
    //set condition here
    int n=image.size();
    int m=image[0].size();
    //set limit here
    if(i<0 || j<0) return ;
    if(i>=n || j>=m) return ;
    if(image[i][j]!=initialColor) return ;
    //set condition
    image[i][j]=newColor;
    //call for all direction
    dfs(i-1,j,initialColor,newColor,image);
    dfs(i+1,j,initialColor,newColor,image);
    dfs(i,j-1,initialColor,newColor,image);
    dfs(i,j+1,initialColor,newColor,image);
}
//matrix work
vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor) {
    int initialColor=image[sr][sc];
    if(initialColor!=newColor)
        dfs(sr,sc,initialColor,newColor,image);
    return image;
}
signed main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>v[i][j];
    int sr,sc;
    cin>>sr>>sc;
    int number;
    cin>>number;
    vector<vector<int>> v2=floodFill(v,sr,sc,number);
    for(auto x:v2)
    {
        for(auto y:x)
            cout<<y<<" ";
        cout<<endl;
    }
    return 0;
}