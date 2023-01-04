// https://atcoder.jp/contests/dp/tasks/dp_b
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+10;
vector<int> v(N);
vector<int> dp(N,-1);
int k;
int frog(int i)
{
    if(i==0)
        return 0;
    if(dp[i]!=-1)
        return dp[i];
    int cost=INT_MAX;
    for(int j=1;j<=k;j++)
        if(i-j>=0)
            cost=min(cost,frog(i-j)+abs(v[i]-v[i-j]));
    return dp[i]=cost;
}
signed main()
{
    int n;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<frog(n-1)<<endl;
    return 0;
}