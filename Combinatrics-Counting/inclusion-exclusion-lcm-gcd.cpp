#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
#define endl "\n"
using namespace std;
int lcm(int a,int b)
{
    return ((a*b)/__gcd(a,b));
}
void solve()
{
    int x1,x2;
    cin>>x1>>x2;
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int sum=0,sum2=0,sum3=0,ans;
    int lc=0;
    //generating all possible subset
    for(int mask=1;mask<(1<<v.size());mask++)
    {
        vector<int> subset;
        for(int i=0;i<v.size();i++)
        {
            if(mask & (1<<i))
            {
                subset.push_back(v[i]);
            }
        }
        lc=subset[0];
        for(int j=0;j<subset.size();j++)
        {
            lc=lcm(lc,subset[j]);
        }
        //applying formula
        //if range
        (x1%lc==0)?sum2+=((x2/lc)-(x1/lc))+1:sum2+=(x2/lc)-(x1/lc);
        //excluding even elements subset
        if(subset.size()%2==0) sum-=sum2;
        //inclusing odd elemnets subset
        else sum+=sum2;
        //applying PIE method of set
        sum2=0;
    }
    cout<<sum<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}