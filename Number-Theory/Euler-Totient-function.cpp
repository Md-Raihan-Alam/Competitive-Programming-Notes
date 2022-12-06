#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
//using sieve
int phi[1000001];
void sieveEFT(int maxN)
{
    for(int i=1;i<=maxN;i++)
        phi[i]=i;
    for(int i=2;i<=maxN;i++)
    {
        if(phi[i]==i)
        {
            for(int j=i;j<=maxN;j+=i)
            {
                phi[j]=phi[j]/i;
                phi[j]*=(i-1);
            }
        }
    }
}
signed main()
{
    int cnt=0;
    int n;
    cin>>n;
    sieveEFT(1000000);
    int q=n;
    //brute force
    for(int i=1;i<=n;i++)
    {
        if(__gcd(i,n)==1)
            cnt++;
    }
    cout<<cnt<<endl;
    //sqrt(n)
    int ans=n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
            }
            ans=ans/i*(i-1);
        }
    }
    if(n>1)
    {
        ans=ans/n*(n-1);
    }
    cout<<ans<<endl;
    cout<<phi[q]<<endl;
    return 0;
}