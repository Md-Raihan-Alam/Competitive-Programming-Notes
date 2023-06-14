#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<int> dp(10000,-1);
int func(int amount,vector<int>& coins)
{
    if(amount==0)
        return 0;
    if(dp[amount]!=-1)
        return dp[amount];
    int ans=INT_MAX;
    for(int coin:coins)
    {
        if(amount-coin>=0)
            ans=min(ans,func(amount-coin,coins)+1);
    }
    return dp[amount]=ans;
}
int coinChange(vector<int> &coins,int amount)
{
    int ans=func(amount,coins);
    return ans==INT_MAX?-1:ans;
}
signed main()
{
    vector<int> coins={2};
    cout<<coinChange(coins,3)<<endl;
    return 0;
}