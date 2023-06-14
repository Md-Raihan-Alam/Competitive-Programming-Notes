// https://practice.geeksforgeeks.org/problems/coin-change2448/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<int> dp(10000,-1);
int func(int index,int amount,vector<int>& coins)
{
    if(amount==0)
        return 1;
    if(dp[amount]!=-1)
        return dp[amount];
    int ways=0;
    for(int coin_amount=0;coin_amount<amount;coin_amount+=
}
signed main()
{
  
    return 0;
}