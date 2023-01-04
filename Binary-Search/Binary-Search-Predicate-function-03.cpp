#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n,m;
const int N=1e6+10;
vector<int> tress(N);
//predicate function - return true or false, return true/false after/before certain point
bool good(int h)
{
    int wood=0;
    for(int i=0;i<n;i++)
    {
        if(tress[i]>h)
        {
            wood+=(tress[i]-h);
        }
    }
    return wood>=m;
}
signed main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>tress[i];
    int lo=0;
    int hi=1e9;
    int mid;
    while(hi-lo>1)
    {
        mid=(hi+lo)/2;
        if(good(mid))
        {
            lo=mid;
        }else{
            hi=mid-1;
        }
    }
    if(good(hi))
    {
        cout<<hi<<endl;
    }else{
        cout<<lo<<endl;
    }
    return 0;
}