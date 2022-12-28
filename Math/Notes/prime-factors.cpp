#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
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
    if(n==1)
    {
        ans.push_back(factor);
    }else{
        ans.push_back(n);
    }
    return ans;
}
signed main()
{
    //1 is not consider prime number, so start from 1 index
    //every n number can at most have one prime factor greater than sqrt(n)
    //If we after dividing out some prime factor, calculate the square root of the remaining number we
// can use that square root as upper limit for factor. If factor exceeds this square root
// we know the remaining number is prime.

  int x;
  cin>>x;
  vector<int> ans=factorizeFaster(x);
  for(int i=1;i<ans.size();i++)
    cout<<ans[i]<<" ";
    return 0;
}