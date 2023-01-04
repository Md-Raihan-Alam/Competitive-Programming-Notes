// https://atcoder.jp/contests/dp/tasks/dp_a
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+10;
vector<int> v(N);
vector<int> dp(N,-1);
int frog(int i)
{
    if(i==0)
        return 0;
    if(dp[i]!=-1)
        return dp[i];
    int cost=INT_MAX;
    cost=min(cost,frog(i-1)+abs(v[i]-v[i-1]));
    if(i>1)
        cost=min(cost,frog(i-2)+abs(v[i]-v[i-2]));
    return dp[i]=cost;
}
signed main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<frog(n-1)<<endl;
    return 0;
}