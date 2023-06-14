#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int> prefixSum(n+1);
    prefixSum[0]=0;
    for(int i=1;i<=n;i++)
    {
        prefixSum[i]=prefixSum[i-1]+v[i-1];
    }
    int mx=INT_MAX;
    int index=-1;
    for(int i=k;i<=n;i++)
    {
        if((prefixSum[i]-prefixSum[i-k])<mx)
        {
            index=i-k+1;
            mx=prefixSum[i]-prefixSum[i-k];
        }
    }
    cout<<index<<endl;
    return 0;
}