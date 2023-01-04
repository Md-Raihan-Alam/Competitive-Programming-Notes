//THIS IS TOP DOWN APPROACH

//an example with fibonacci numbers
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
#define int long long
#define endl "\n"
vector<int> dp(N,-1);
//usually - factorial, exponenetiation, bitmask etc->O(n)
int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    //dynamic programing - memoise
    if(dp[n]!=-1)
        return dp[n];
    return dp[n]=fib(n-1)+fib(n-2);
    //normal way-o(2^n)
    // return fib(n-1)+fib(n-2);
}
signed main()
{
    int n;
    cin>>n;
//THIS IS BOTTOM UP APPROACH
    for(int i=2;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2];
    cout<<fib(n)<<endl;
    return 0;
}