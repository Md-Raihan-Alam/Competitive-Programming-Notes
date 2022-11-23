#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define int long long
#define endl "\n"
using namespace std;
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
void Divisor(int n)
{
    int divisor=1;
    int sum=1;
    for(int i=0;i<primes[i];i++)
    {
        if(n%primes[i]==0)
        {
            int cnt=1;
            while(n%primes[i]==0)
            {
                n/=primes[i];
                cnt++;
            }
            divisor=divisor*cnt;
            //sum of divisors
            sum*=((pow(primes[i],cnt)-1)/(primes[i]-1));
        }
    }
    cout<<divisor<<endl;
    cout<<sum<<endl;
}
//sqrt(n)
int divisor(int n)
{
    int divisor=0;
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            divisor++;
        }else{
            divisor+=2;
        }
    }
    return divisor;
}
signed main()
{
    int lim=1e7;
    primeGen(lim);
    int n;
    cin>>n;
    cout<<divisor(n)<<endl;
    Divisor(n);
    return 0;
}