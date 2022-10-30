#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,x,y;
bool good(int m)
{
    if(m<min(x,y))   return false;
    m-=min(x,y);
    // cout<<m<<endl;
    return ((m/x)+(m/y)+1>=n);
}
signed main()
{
    cin>>n>>x>>y;
    int l=0;
    int r=n*(min(x,y));
    while(r>l+1)
    {
        int m=(l+r)/2;
        // cout<<m<<endl;
        if(good(m))
            r=m;
        else
            l=m;
    }
    cout<<r<<endl;
    return 0;
}