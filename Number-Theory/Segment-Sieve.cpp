#include<iostream>
#include<vector>
#define int long long
#define endl "\n"
#define MAX 1000007
using  namespace std;
vector<bool> is_prime(10000007,0);
vector<int> primes;
void sieve(int n)
{
    for(int i=3;i<=n;i+=2)  is_prime[i]=1;
    for(int i=3;i*i<=n;i+=2)
    {
        if(is_prime[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                is_prime[j]=0;
            }
        }
    }
    is_prime[2]=1;
    primes.push_back(2);
    for(int i=3;i<=n;i+=2)
    {
        if(is_prime[i])
            primes.push_back(i);
    }
}
void segmentSieve(int l,int r)
{
    bool isPrime[r-l+1];
    for(int i=0;i<r-l+1;i++)
    {
        isPrime[i]=true;
    }
    if(l==1) isPrime[0]=false;
    for(int i=0;primes[i]*primes[i]<=r;i++)
    {
        int currentPrime=primes[i];
        int base=(l/currentPrime)*currentPrime;
        if(base<l)
        {
            base+=currentPrime;
        }
        for(int j=base;j<=r;j+=currentPrime)
        {
            isPrime[j-l]=false;
        }
        if(base==currentPrime) isPrime[base-l]=true;
    }
    for(int i=0;i<r-l+1;i++)
    {
        if(isPrime[i])  cout<<(i+l)<<" ";
    }
    cout<<endl;
}
signed main()
{
    sieve(MAX);
    for(int i=0;i<=100;i++)
        cout<<primes[i]<<" ";
    cout<<endl;
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        segmentSieve(l,r);
    }
    return 0;
}