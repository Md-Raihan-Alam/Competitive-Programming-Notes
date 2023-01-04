#include<bits/stdc++.h>
#define int long long
#define endl "\n";
using namespace std;
vector<int> factorize(int n)
{
    vector<int> ans;
    if(n%2==0)
    {
        while(n%2==0)
        {
            n/=2;
        }
        ans.push_back(2);
    }
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
            }
            ans.push_back(i);
        }
    }
    if(n>1)
        ans.push_back(n);
    return ans;
}
vector<int> factorizeFaster(int n)
{
    vector<int> ans;
    if(n%2==0)
    {
        ans.push_back(2);
        n=n/2;
        while(n%2==0)
        {
            n/=2;
        }
    }else{
        ans.push_back(1);
    }
    int factor=3;
    int maxFactor=sqrt(n);
    while(n>1 && factor<=maxFactor)
    {
        if(n%factor==0)
        {
            n/=factor;
            ans.push_back(factor);
            while(n%factor==0)
            {
                n/=factor;
            }
            maxFactor=sqrt(n);
        }
        factor+=2;
    }
    if(n>1)
        ans.push_back(n);
    return ans;
}
signed main()
{
    long long l;
    cin>>l;
    vector<int> factors=factorize(l);
    vector<int> factorsFast=factorizeFaster(l);
    for(int i=0;i<factors.size();i++)
        cout<<factors[i]<<" ";
    cout<<endl;
    for(int j=0;j<factorsFast.size();j++)
        cout<<factorsFast[j]<<" ";
    cout<<endl;
    return 0;
}