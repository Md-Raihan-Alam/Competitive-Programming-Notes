#include<iostream>
#include<vector>
#define int long long
using namespace  std;
vector<bool> is_prime(10000007,0);
vector<int> primes;
void primeGen(int n)
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
vector<int> factorize(int n)
{
    vector<int> primeFactor;
    for(int i=0;primes[i]<=n;i++)
    {
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0){
                n/=primes[i];
                primeFactor.push_back(primes[i]);
            }
        }
    }
    if(n>1) primeFactor.push_back(n);
    return primeFactor;
}
signed main()
{
    int lim=1e7;
    primeGen(lim);
    int x;
    cin>>x;
    vector<int> ans=factorize(x);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;
}
