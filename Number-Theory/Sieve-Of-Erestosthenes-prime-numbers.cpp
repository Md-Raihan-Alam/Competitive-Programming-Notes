#include<iostream>
#include<vector>
using namespace std;
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
//sieve of erestosthenese
int main()
{
    long long q,n;
    cin>>q;
    sieve(MAX);
    while(q--){
        cin>>n;
        cout<<primes[n-1]<<endl;
    }
    return 0;
}  