#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define MAX 10000007
//sieve of erestosthenese
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
signed main()
{
    int num=20;
    while(1)
    {
        bool success=true;
        for(int i=1;i<=20;i++)
            if(num%i!=0)
                success=false;
        if(success)
            break;
        num+=20;
    }
    cout<<num<<endl;
    int x;
    cin>>x;
    sieve(x);
    int k=x;
    int ans=1;
    int i=0;
    bool check=true;
    int limit=sqrt(k);
    vector<int> a(x+1,0);
    while(primes[i]<=k)
    {
        a[i]=i;
        if(check)
        {
            if(primes[i]<=limit)
            {
                a[i]=floor(log(k)/log(primes[i]));
            }else{
                check=false;
            }
        }
        cout<<a[i]<<" "<<primes[i]<<endl;
        ans=ans*(pow(primes[i],a[i]));
        i++;
    }
    cout<<ans<<endl;
    return 0;
}