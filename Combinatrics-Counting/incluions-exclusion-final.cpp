#include<iostream>
#include<vector>
#include<cmath>
#define int long long
#define endl "\n"
using namespace std;
signed main()
{
    int n,x;
    cin>>x>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int sum=0;
    for(int mask=1;mask<pow(2,n);mask++)
    {
        int prod=1;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(mask&(1<<i))
            {
                cnt++;
                prod*=v[i];
            }
        }
        if(cnt%2==0)
        {
            sum-=(x/prod);
        }else{
            sum+=(x/prod);
        }
    }
    cout<<sum<<endl;
    return 0;
}