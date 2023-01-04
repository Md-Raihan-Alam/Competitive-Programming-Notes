#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double eps=1e-6;
double multiply(double mid,int n)
{
    double ans=1;
    for(int i=0;i<n;i++)
    {
        ans*=mid;
    }
    return ans;
}
signed main()
{
    //problem-find the sqrt of a number
    double x;
    int n;
    cin>>x>>n;
    double lo=1,hi=x,mid;
    //sqrt-> log(N*(10^d))
    //pth sqrt->p*log(N*(10^d))
    while(hi-lo>eps)
    {
        mid=(hi+lo)/2;
        // if(mid*mid<x)//sqrt
        if(multiply(mid,n)<x)
        {
            lo=mid;
        }else{
            hi=mid;
        }
    }
    cout<<setprecision(10)<<lo<<endl;
    cout<<setprecision(10)<<hi<<endl;
    return 0;
}