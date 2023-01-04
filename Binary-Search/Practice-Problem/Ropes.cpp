#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
vector<int> v;
bool good(double x)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=floor(v[i]/x);
    }
    return s>=k;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>k;
    v.resize(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    double l=0;//good double
    double r=1e8;//r is bad
    // for(int i=0;i<100;i++)
    while(r-l>1e-6)
    {
        double m=(l+r)/2;
        if(good(m))
        {
            l=m;
        }else{
            r=m;
        }
        // cout<<i<<" "<<l<<" "<<r<<endl;
    }
    cout<<setprecision(20)<<l<<endl;
    return 0;
}