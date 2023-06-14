#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
#define int long long
int parent[N];
int size[N];
void make(int v)
{
    parent[v]=v;
    size[v]=1;
}
int fi(int v)
{
    if(v==parent[v])
        return v;
    //path compression
    return parent[v]=fi(parent[v]);
}
void uni(int a,int b)
{
    a=fi(a);
    b=fi(b);
    if(a!=b)
    {
        //union by size
        if(size[a]<size[b])
            swap(a,b);
        parent[b]=a;
        size[a]+=size[b];
    }
}
//O(a(n))
signed main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        make(i);
    }   
    while(k--)
    {
        int u,v;
        cin>>u>>v;
        uni(u,v);
    }
    int connected_ct=0;
    for(int i=1;i<=n;i++)
    {
        if(fi(i)==i)
            connected_ct++;
    }
    cout<<connected_ct<<endl;
    return 0;
}