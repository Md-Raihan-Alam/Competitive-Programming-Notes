// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/E
#include<iostream>
#define int long long
using namespace std;
int n;
bool good(int x)
{
    return (x*(x+1))/2<=n;
}
signed main()
{
    cin>>n;
    int a=1;
    int b=1;
    while(good(b)) b*=2;
    // cout<<b<<endl;
    int l=a;
    int r=b;
    while(r>l+1)
    {
        int m=(l+r)/2;
        if(good(m))
            l=m;
        else
            r=m;
    }
    cout<<l<<endl;
    return 0;
}