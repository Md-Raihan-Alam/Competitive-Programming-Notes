#include<bits/stdc++.h>
using namespace std;
const int N=25e2+10;
vector<int> a(N);
vector<int> dp(N,-1);
int lis(int i)
{
    if(dp[i]!=-1)
        return dp[i];
    int ans=1;
    for(int j=0;j<i;j++)
    {
        if(a[i]>a[j])
        {
            ans=max(ans,lis(j)+1);
        }
    }
    return dp[i]=ans;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,lis(i));
    }
    cout<<ans<<endl;
}
//8
//10 9 2 5 3 7 101 18