#include<iostream>
#include<vector>
using namespace std;
//sieve of erestosthenese
vector<int> primes;
bool arr[90000001];
void sieve(){
    long long maxN=90000000;
    arr[0]=arr[1]=true;
    for(long long i=2;i*i<=maxN;i++){
        if(arr[i]==false){
            for(long long j=i*i;j<=maxN;j+=i){
                arr[j]=true;
            }
        }
    }
    for(long long i=2;i<=maxN;i++){
        if(!arr[i])
            primes.push_back(i);
    }
}
//sieve of erestosthenese
int main()
{
    long long q,n;
    cin>>q;
    sieve();
    while(q--){
        cin>>n;
        cout<<primes[n-1]<<endl;
    }
    return 0;
}  